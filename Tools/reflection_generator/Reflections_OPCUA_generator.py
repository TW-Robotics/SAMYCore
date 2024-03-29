#!/usr/bin/env python

# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

from __future__ import print_function
import sys
#import nodeset_compiler.backend_open62541_typedefinitions as backend
import argparse

###############################
# Parse the Command Line Input#
###############################

parser = argparse.ArgumentParser()
parser.add_argument('-c', '--type-csv',
                    metavar="<typeDescriptions>",
                    type=argparse.FileType('r'),
                    dest="type_csv",
                    action='append',
                    default=[],
                    help='csv file with type descriptions')

parser.add_argument('--namespaceMap',
                    metavar="<namespaceMap>",
                    type=str,
                    dest="namespace_map",
                    action='append',
                    default=["0:http://opcfoundation.org/UA/"],
                    help='Mapping of namespace uri to the resulting namespace index in the server. Default only contains Namespace 0: "0:http://opcfoundation.org/UA/". '
                         'Parameter can be used multiple times to define multiple mappings.')

parser.add_argument('-s', '--selected-types',
                    metavar="<selectedTypes>",
                    type=argparse.FileType('r'),
                    dest="selected_types",
                    action='append',
                    default=[],
                    help='file with list of types (among those parsed) to be generated. If not given, all types are generated')

parser.add_argument('--no-builtin',
                    action='store_true',
                    dest="no_builtin",
                    help='Do not generate builtin types')

parser.add_argument('--opaque-map',
                    metavar="<opaqueTypeMap>",
                    type=argparse.FileType('r'),
                    dest="opaque_map",
                    action='append',
                    default=[],
                    help='JSON file with opaque type mapping: { \'typename\': { \'ns\': 0,  \'id\': 7, \'name\': \'UInt32\' }, ... }')

parser.add_argument('--internal',
                    action='store_true',
                    dest="internal",
                    help='Given bsd are internal types which do not have any .csv file')

parser.add_argument('-t', '--type-bsd',
                    metavar="<typeBsds>",
                    type=argparse.FileType('r'),
                    dest="type_bsd",
                    action='append',
                    default=[],
                    help='bsd file with type definitions')

parser.add_argument('-i', '--import',
                    metavar="<importBsds>",
                    type=str,
                    dest="import_bsd",
                    action='append',
                    default=[],
                    help='combination of TYPE_ARRAY#filepath.bsd with type definitions which should be loaded but not exported/generated')

parser.add_argument('outfile',
                    metavar='<outputFile>',
                    help='output file w/o extension')



parser.add_argument('-open62541_tools_path', '--open62541_tools_path',
                    metavar="<open62541_tools_path>",
                    type=str,
                    dest="open62541_tools_path",
                    help='path to the open62541 tools, so the folder can be added for search the corresponding modules by Python and import the parsing')

args = parser.parse_args()

outname = args.outfile.split("/")[-1]
inname = ', '.join(list(map(lambda x: x.name.split("/")[-1], args.type_bsd)))

namespaceMap = {
    "http://opcfoundation.org/UA/": 0
}

for m in args.namespace_map:
    [idx, ns] = m.split(':', 1)
    namespaceMap[ns] = int(idx)



# We add the path where the open62541 nodeset tools are situated
sys.path.append(args.open62541_tools_path)
# We import the parser, since we will use it for later generating the reflection
from nodeset_compiler.type_parser import CSVBSDTypeParser
from Reflection_generator_backend import ReflectionGenerator

print("SAMY Compilation Info: In case an error occurs at this step, Reflections_OPCUA_generator.py has been tested with open62541 v1.2 tools/nodeset_compiler")

parser = CSVBSDTypeParser(args.opaque_map, args.selected_types, args.no_builtin, outname, args.import_bsd,
                          args.type_bsd, args.type_csv, namespaceMap)
parser.create_types()

generator = ReflectionGenerator(parser, inname, args.outfile, args.internal, namespaceMap)

generator.write_declarations()


print("Reflection succesfully generated for", outname)


