import DTbasedController.DTbasedController as DTbasedController
import DTbasedController.DTControlDotFileParser as DTControlDotFileParser
import SAMYControlInterface

dtDotFileParser = DTControlDotFileParser.DTControlDotFileParser('/home/jbg/Desktop/SAMY/SAMYControl/UseCase1/UseCase1_Controller.dot')
controller = DTbasedController.DTbasedController(dtDotFileParser.root, dtDotFileParser.x_metadata, dtDotFileParser.y_metadata )
controlInterface = SAMYControlInterface.SAMYControlInterface( 'opc.tcp://localhost:4840/', controller.controlStateVariables, controller.standardControlCallback)
controlInterface.startSystemControl(1000)