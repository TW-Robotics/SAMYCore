from __future__ import print_function
import re
import itertools
import sys
import copy
import time
import getpass
import platform
from collections import OrderedDict

#if sys.version_info[0] >= 3:
#    from nodeset_compiler.type_parser import BuiltinType, EnumerationType, OpaqueType, StructType
#else:
#    from type_parser import BuiltinType, EnumerationType, OpaqueType, StructType

from nodeset_compiler.type_parser import BuiltinType, EnumerationType, OpaqueType, StructType

# Some types can be memcpy'd off the binary stream. That's especially important
# for arrays. But we need to check if they contain padding and whether the
# endianness is correct. This dict gives the C-statement that must be true for the
# type to be overlayable. Parsed types are added if they apply.
builtin_overlayable = {"Boolean": "true",
                       "SByte": "true", "Byte": "true",
                       "Int16": "UA_BINARY_OVERLAYABLE_INTEGER",
                       "UInt16": "UA_BINARY_OVERLAYABLE_INTEGER",
                       "Int32": "UA_BINARY_OVERLAYABLE_INTEGER",
                       "UInt32": "UA_BINARY_OVERLAYABLE_INTEGER",
                       "Int64": "UA_BINARY_OVERLAYABLE_INTEGER",
                       "UInt64": "UA_BINARY_OVERLAYABLE_INTEGER",
                       "Float": "UA_BINARY_OVERLAYABLE_FLOAT",
                       "Double": "UA_BINARY_OVERLAYABLE_FLOAT",
                       "DateTime": "UA_BINARY_OVERLAYABLE_INTEGER",
                       "StatusCode": "UA_BINARY_OVERLAYABLE_INTEGER",
                       "Guid": "(UA_BINARY_OVERLAYABLE_INTEGER && " +
                               "offsetof(UA_Guid, data2) == sizeof(UA_UInt32) && " +
                               "offsetof(UA_Guid, data3) == (sizeof(UA_UInt16) + sizeof(UA_UInt32)) && " +
                               "offsetof(UA_Guid, data4) == (2*sizeof(UA_UInt32)))"}

whitelistFuncAttrWarnUnusedResult = []  # for instances [ "String", "ByteString", "LocalizedText" ]


# Strip invalid characters to create valid C identifiers (variable names etc):
def makeCIdentifier(value):
    keywords = frozenset(["double", "int", "float", "char"])
    sanitized = re.sub(r'[^\w]', '', value)
    if sanitized in keywords:
        return "_" + sanitized
    else:
        return sanitized

def getNodeidTypeAndId(nodeId):
    if not nodeId:
        return ("UA_NODEID_NUMERIC", "{0}")
    if '=' not in nodeId:
        return ("UA_NODEID_NUMERIC", "{0}LU".format(nodeId) )
    if nodeId.startswith("i="):
        return ("UA_NODEID_NUMERIC", "{0}LU".format(nodeId[2:]) )
    if nodeId.startswith("s="):
        strId = nodeId[2:]
        return ("UA_NODEID_STRING", " .string = UA_STRING_STATIC(\"{id}\") ".format(id=strId.replace("\"", "\\\"")) )

class ReflectionGenerator(object):
    def __init__(self, parser, inname, outfile, is_internal_types, namespaceMap):
        self.parser = parser
        self.inname = inname
        self.outfile = outfile
        self.is_internal_types = is_internal_types
        self.filtered_types = None
        self.namespaceMap = namespaceMap
        self.fh = None
        self.types_map_function_string = ""

    @staticmethod
    def print_struct_typedef(struct):
        #generate enum option for union
        returnstr = ""
        returnstr += "REFLECTION(UA_%s, " % makeCIdentifier(struct.name)
        if struct.is_union:
            returnstr += "switchField, fields)"
            returnstr += "\nREFLECTION_UNION_FIELDS(UA_%s, fields, " % makeCIdentifier(struct.name)
        for i in range( len(struct.members) ):
            separator = ", " if ( i != (len(struct.members)-1) ) else ""
            returnstr += "%s%s" % (makeCIdentifier(struct.members[i].name), separator)
        returnstr += ")\n"
        if(  len(struct.members) == 0 ):
            returnstr = "" # If the struct does not have members, reflection struct cannot exist (and throws errors)
        return returnstr

    #@staticmethod
    def print_datatype_typedef(self, datatype):
        nodeidType, nodeId = getNodeidTypeAndId( datatype.nodeId )
        self.types_map_function_string += "\tNodesIdsRegistry::addNodeId( \"UA_%s\", %s( %s, %s ) );\n" % ( makeCIdentifier(datatype.name), nodeidType, self.namespaceMap[datatype.namespaceUri], nodeId ) 
        if isinstance(datatype, EnumerationType):
            return ""
        if isinstance(datatype, OpaqueType):
            return ""
        if isinstance(datatype, StructType):
            return self.print_struct_typedef(datatype)
        raise RuntimeError("Type does not have an associated typedef")

    def write_declarations(self):
        self.fh = open(self.outfile + "_Reflection.h", 'w')

        self.filtered_types = self.iter_types(self.parser.types)

        self.print_header()

        self.fh.close()


    def printh(self, string):
        print(string, end='\n', file=self.fh)

    def iter_types(self, v):
        l = copy.deepcopy(v)
        if len(self.parser.selected_types) > 0:
            for ns in v:
                for t in v[ns]:
                    if t not in self.parser.selected_types:
                        if ns in l and t in l[ns]:
                            del l[ns][t]
        if self.parser.no_builtin:
            for ns in v:
                for t in v[ns]:
                    if isinstance(v[ns][t], BuiltinType):
                        if ns in l and t in l[ns]:
                            del l[ns][t]
        for ns in self.parser.existing_types:
            for t in self.parser.existing_types[ns]:
                if ns in l and t in l[ns]:
                    del l[ns][t]
        return l


    def print_header(self):
        self.printh('''/* Generated from ''' + self.inname + ''' with script ''' +
                    sys.argv[0] + ''' * on host ''' + platform.uname()[1] + ''' by user ''' +
                    getpass.getuser() + ''' at ''' + time.strftime("%Y-%m-%d %I:%M:%S") + ''' */

#ifndef ''' + self.parser.outname.upper() + '''_REFLECTION_GENERATED_H_
#define ''' + self.parser.outname.upper() + '''_REFLECTION_GENERATED_H_

#include <Reflection.h>\n
#include <NodesIdsRegistry.h>\n

namespace SAMY{
namespace Reflection{
''')

        self.printh('''/**
 * This is autogenerated code used for a reflection system that allows using different ontologies for describing control commands just by modelling the ontology in OPC UA */''')
        totalCount = 0
        for ns in self.filtered_types:
            totalCount += len(self.filtered_types[ns])

        if totalCount > 0:

            for ns in self.filtered_types:
                for i, t_name in enumerate(self.filtered_types[ns]):
                    t = self.filtered_types[ns][t_name]
                    if not isinstance(t, BuiltinType):
                        self.printh(self.print_datatype_typedef(t) + "\n")

        aux = self.outfile.split("/")
        l = len(aux) - 1
        aux = aux[l]
        self.printh('''

inline void set_typesids_in_registry_%s(){
    static bool set = false;
    if( set )
        return;

    set = true;
    %s}
	} // ns Reflection
}// ns SAMY''' % ( aux, self.types_map_function_string ) )

        self.printh('''
#endif /* %s_REFLECTION_GENERATED_H_ */''' % self.parser.outname.upper())

