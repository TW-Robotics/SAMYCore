import sys
sys.path.insert(0, "..")
import logging
import time

try:
    from IPython import embed
except ImportError:
    import code

    def embed():
        vars = globals()
        vars.update(locals())
        shell = code.InteractiveConsole(vars)
        shell.interact()


from opcua import Client
from opcua import ua

from CRCL_DataTypes import *

if __name__ == "__main__":
    logging.basicConfig(level=logging.WARN)

    client = Client("opc.tcp://localhost:4841/")
    try:

        client.connect()
        client.load_type_definitions()  # scan server for custom structures and import them
        myvar = client.get_node(ua.NodeId(1503, 1))

        auxClass = MoveToParametersSetDataType()
        print(auxClass.EndPosition)

        auxClass.RealTimeParameter = False
        auxClass.MoveStraight = False
        auxClass.EndPosition.id = 1001
        auxClass.EndPosition.name = "This is the name set from python!!"

        aux = myvar.get_value()
        print( aux )

        myvar.set_value(auxClass)
        #print( aux )

        embed()
    finally:
        client.disconnect()
