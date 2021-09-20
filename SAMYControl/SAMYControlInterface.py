from opcua import Client
from opcua import ua
import time
import sys
import pprint


############# These classes are the objects required by the SAMYControlInterface to perform an action so they are called the standard representation of the actions.
# Hence the SAMYControllers pass to the SAMYController interface must convert its outputs to these classes
class SAMYActionParameter(): # A class containing describing a parameter of an action
    def __init__(self, skillParameterNumber_, valueType_ , value_):
        self.skillParameterNumber = skillParameterNumber_ # The command targeted by this parameter within a skill
        self.valueType = valueType_ # "DataBaseReference" or Other (the self.value will be string that will require be translated into a CRCLCommandParameterSet)
        self.value = value_ # The value of the parameter (can be a string than later on can be converted into a CRCLCommandParameterSet required by the skillParameterNumber using a CRCLCommandParameterSet that takes self.value as "metaparameter", or the self.value can be a reference to an element in the SAMYCore database (the name of the parameter stored there)


class SAMYAction: # A class describing a specific action to be performed by an agent
    def __init__(self, agentName_, skillName_, params_ = []):
        self.agentName = agentName_
        self.skillName = skillName_ # Name of the skill of the agent. In case nothing should be done with an agen, the name to use is "pass"
        self.params = params_ # An array of SAMYActionParameters


class SAMYSystemAction: # An action describing the action to be performed on the total system (an array of SAMYActions, one for each agent)
    def __init__(self, individualActionsArray):
        self.individualActions = individualActionsArray
#######################################################

# Internal classes used by the SAMYControlInterface for encapsulating the SAMYCore structure
class SAMYInformationSource:
    def __init__(self, name_):
        self.name = name_
        self.variablesNodesIds = {}


class SAMYSkill:
    def __init__(self, name_):
        self.name = name_
        self.skillNodeId = None
        self.currentStateNodeId = None
        self.lastTransitionNodeId = None
        self.parametersNodesIds = {}


class SAMYAgent:
    def __init__(self, name_):
        self.name = name_
        self.CRCLStatusNodeId = None
        self.positionNodeId = None
        self.nextSkillNodeId = None
        self.skills = {}


# Object passed to the subscription. It calls the required control callbacks when the relevant variables change
class ControllerStateChangeHandler(object): 
    """
    Subscription Handler. When the value of a relevant variable change (hence the controlled system state changes) or an event is thrown, the methods of this class are called
    """

    def __init__( self, readStateCb_, controlCb_, executeControlCb_ ):
        self.readStateCb = readStateCb_
        self.controlCb = controlCb_
        self.executeControlCb = executeControlCb_

    def datachange_notification(self, node, val, data): # on state change: read new state -> get next action -> perform action
        """
        called for every datachange notification from server
        """
        systemState = self.readStateCb()
        requiredControl = self.controlCb( systemState ) # SAMYSystemAction
        self.executeControlCb( requiredControl )

    def event_notification(self, event):
        """
        called for every event notification from server
        """
        systemState = self.readStateCb()
        requiredControl = self.controlCb( systemState ) # requiredControl is a SAMYSystemAction
        self.executeControlCb( requiredControl )


    def status_change_notification(self, status):
        """
        called for every status change notification from server
        """
        pass


# SAMYControlInterface offers a simple control interface for controlling the system through the SAMYCore. 
# The only interface requeriment for the control function passed to SAMYControlInterface is being a function that takes one parameter, the system state in a standard form (an array of numerical and categorical values with the order specified by controlStateVariablesNames_), and returns a (valid) SAMYSystemAction (which is the next action to be performed). Everything else is handled internally. This function of the controller class is passed as the standardControlCb_ in the arguments when instantiated.
class SAMYControlInterface():
    def __init__(self, samyCoreAddress_, controlStateVariablesNames_, standardControlCb_, serializeToStandardOutput_ = True  ):
        if( len(controlStateVariablesNames_) == 0 ):
            string = 'The SAMYCore controlling interface requires providing variable names appearing in the SAMYCore System Status nodes.'
            raise SystemError(string)
        self.samyCoreAddress = samyCoreAddress_
        self.client = Client(self.samyCoreAddress)
        self.auxClient = Client(self.samyCoreAddress) # we need a second client when controlling, in order to be able to read the complete new state (all the variables) within the callback
        self.controlStateVariablesNames = controlStateVariablesNames_ # Array containing the names of the variables that define a controller state
        self.standardControlCb = standardControlCb_ # A callback that takes 
        self.serializeToStandardOutput = serializeToStandardOutput_ # When marked as true, the self.readSytemState function "flattens out" the structure into an array of strings, integers and floats, which it is considered the standard representation of a state

        # The following attributes require connecting and inspecting the SAMYCore
        self.namespaces = {} # SAMYCore namespaces
        self.agents = {} # Dict of SAMYAgents in the system
        self.infoSources = {} # Dict of SAMYInformationSources in the system
        self.systemStateNodeIds = {} # Dictionary containing ALL the nodes in the SAMYCore that describe the system (all the children of SAMYCore SystemStatus node)
        self.controlStateVariablesNodesIds = [] # Array containing the nodesIds of the variables that define a controller state
        self.controlStateVariablesDataTypesNodesIds = [] # Array containing the nodes ids of the data types of the controller state variables, so we can flatten the structures to an array and reconstruct the structures
        self.systemState = [] # The array of values describing the state of the system required by a controller in the form of integers, strings and floats

        self.controllerStateChangeHandler = ControllerStateChangeHandler( self.readSytemState, self.standardControlCb, self.executeSystemAction )

        self.connectToServerAndSetControllingInterface()

        print(self.controlStateVariablesNodesIds)
        self.printAgents(False)

        print('Number of agents: ', len(self.agents))
        print('Number of information sources: ', len(self.infoSources))
        print('Number of variable nodes describing the system in the SAMYCore : ', len(self.systemStateNodeIds))
     #   pprint.pprint(self.systemStateNodeIds)


    def startSystemControl(self, interval = 100):
        nodesToSubscribe = []
        try:
            self.auxClient.connect()
            self.auxClient.load_type_definitions()
            for nodeId in self.controlStateVariablesNodesIds:
               nodesToSubscribe.append( self.client.get_node(nodeId) )
            sub = self.client.create_subscription(interval, self.controllerStateChangeHandler )
            handle = sub.subscribe_data_change(nodesToSubscribe)
            print("Control started: subscription to controller state variables started with an interval of ", interval, " ms")
        except:
               self.client.disconnect()
               string = 'Error starting the control of the system. Could not complete the subscription to the nodes ' + str(self.controlStateVariablesNodesIds)
               raise SystemError(string)


 #   def updateSystemState(self, varNodeId, newValue): Possible alternative a readSytemState and the additional requeriment of and auxClient. Only the var that thrown the callback would be modified or all? Check
 #       self.systemState[self.controlStateVariablesNodesIds.index(varNodeId)] = newValue
 #       return self.systemState


    def readSytemState(self):
        state = []
        try:
            for stateVarNode in self.controlStateVariablesNodesIds:
               state.append( self.auxClient.get_node(stateVarNode).get_value() )
        except:
               self.client.disconnect()
               self.auxClient.disconnect()
               string = 'Error reading the system status. When reading the SAMYCore node ' + stateVarNode + ' something went wrong. Please review it.'
               raise SystemError(string)
        self.systemState = state
        return self.systemState
            

    def executeSystemAction(self, systemAction):
        if( len( systemAction.individualActions ) == len(self.agents) ):
            for action in systemAction:
                performIndividualAction(action)


    def performIndividualAction(action):
        agent = self.agents[action.agent]
        skill = agent.skills[action.name]
        for parameter in action.params: # Writes all the parameters of the skill
            if(params.valueType == 'DataBaseReference'):
                dataBaseNode = getDataBaseParameter(params.value)
                dataBaseValue = dataBaseNode.get_value()
                agentSkillParamNode = self.client.get_node( skill.parametersNodesIds[params.skillParameterNumber] )
                if( agentSkillParamNode.get_data_type() == dataBaseNode.get_data_type() ):
                    agentSkillParamNode.set_value( parameterValue )
                else: # TODO  try to create a CRCLCommandParameterSet from the node in the database CRCLCommandParameterSetBuilder (similar to the other else in this function)
                    self.client.disconnect()
                    string = 'The SAMYCore does not have the expected structure. SystemStatus node is missing.'
                    raise SystemError(string)
           # else if( params.valueType == 'Other' ) :
                # CRCLCommandsParameterSetBuilder(params.value)

        agent.nextSkillNodeId.set_value( skill.skillNodeId )


    def connectToServerAndSetControllingInterface(self):
        try:
            self.client.connect()
            self.client.load_type_definitions()
            self.getNamespaces()
            self.extractSystemStructure()
            self.setControlStateVariablesNodesIds()
            self.setControlStateVariablesDataTypesNodesIds()
        except OSError as err:
            self.client.disconnect()
            print("OS error: {0}".format(err))
        except:
            self.client.disconnect()
            print("Unexpected error:", sys.exc_info()[0])
            raise
  #      finally:
  #          self.client.disconnect()


    def extractSystemStructure(self):
            systemStatusNodes = self.getSystemStatusNode().get_children()
            for node in systemStatusNodes:
                auxArray = node.get_browse_name().Name.split('_')
                if( auxArray[0] == 'InformationSource' ): # InformationSource Node
                    if( self.infoSources.get(auxArray[1] ) == None ):
                        self.infoSources[auxArray[1]] = SAMYInformationSource(auxArray[1])

                    self.infoSources[auxArray[1]].variablesNodesIds[auxArray[2]] = node.get_value()
                    self.systemStateNodeIds[str(node.get_browse_name().Name)] = node.get_value()
                elif(auxArray[0] == 'Robot'): # Robot Node
                    agent = self.agents.get( auxArray[1] )
                    if( agent == None ):
                        self.agents[auxArray[1]] = SAMYAgent(auxArray[1])

                    if( ("Skill" in auxArray) and (not 'Parameter' in auxArray) and
                        ("CurrentState" in auxArray or "LastTransition" in auxArray) ): # Robot_RobotName_Skill_SkillName_CurrentState/LastTransition
                            self.extractSkillVariable(auxArray, node)
                            self.systemStateNodeIds[str(node.get_browse_name().Name)] = node.get_value()
                    elif( ("Skill" in auxArray) and ('Parameter' in auxArray) ): # Robot_RobotName_Skill_SkillName_Parameter_Number_CommandParameterType
                            self.extractSkillParametersVariables(auxArray, node)
                            self.systemStateNodeIds[str(node.get_browse_name().Name)] = node.get_value()
                    elif( ("Skill" in auxArray) and (not 'Parameter' in auxArray) and
                        (not "CurrentState" in auxArray and not "LastTransition" in auxArray) ): # Robot_RobotName_Skill_SkillName
                            self.extractSkillNodeId(auxArray, node)
                            self.systemStateNodeIds[str(node.get_browse_name().Name)] = node.get_value()
                    elif( (not "Skill" in auxArray) and 
                          ("nextSkillNodeId" in auxArray or "Position" in auxArray or "CRCLStatus" in auxArray) ): # Robot_RobotName_nextSkillNodeId
                            self.extractRobotVariable(auxArray, node)
                            self.systemStateNodeIds[str(node.get_browse_name().Name)] = node.get_value()


    def extractSkillVariable(self, nameArray, node): # Robot_RobotName_Skill_SkillName_CurrentState/LastTransition 
        agent = self.agents[nameArray[1]].skills.get(nameArray[3])
        if( agent == None ):
             self.agents[nameArray[1]].skills[nameArray[3]] = SAMYSkill(nameArray[3])

        if( nameArray[4] == "CurrentState"):
             self.agents[nameArray[1]].skills[nameArray[3]].currentStateNodeId = node.get_value()
        elif( nameArray[4] == "LastTransition"):
             self.agents[nameArray[1]].skills[nameArray[3]].lastTransitionNodeId = node.get_value()


    def extractSkillParametersVariables(self, nameArray, node): # Robot_RobotName_Skill_SkillName_Parameter_Number_CommandParameterType 
           skill = self.agents[nameArray[1]].skills.get(nameArray[3])
           if( skill == None ):
                 self.agents[nameArray[1]].skills[nameArray[3]] = SAMYSkill(nameArray[3])
                   
           self.agents[nameArray[1]].skills[nameArray[3]].parametersNodesIds[nameArray[5]] = node.get_value()


    def extractSkillNodeId(self, nameArray, node): # Robot_RobotName_nextSkillNodeId/Position/CRCLStatus
           skill = self.agents[nameArray[1]].skills.get(nameArray[3])
           if( skill == None ):
                 self.agents[nameArray[1]].skills[nameArray[3]] = SAMYSkill(nameArray[3])
                   
           self.agents[nameArray[1]].skills[nameArray[3]].skillNodeId = node.get_value()


    def extractRobotVariable(self, nameArray, node): # Robot_RobotName_nextSkillNodeId/Position/CRCLStatus
            if( "nextSkillNodeId" in nameArray ):
                 self.agents[nameArray[1]].nextSkillNodeId = node.get_value()
            elif( "Position" in nameArray ):
                 self.agents[nameArray[1]].positionNodeId = node.get_value()
            elif( "CRCLStatus" in nameArray ):
                 self.agents[nameArray[1]].CRCLStatusNodeId = node.get_value()


    def setControlStateVariablesNodesIds(self):
        pprint.pprint(self.systemStateNodeIds)
        for var in self.controlStateVariablesNames:
            try:
               self.controlStateVariablesNodesIds.append( self.systemStateNodeIds[var] ) # We get from SAMYCore SystemStatus Node the underlying variable node that represents that state "dimension"
            except:
               string = 'The given variable name ' + var + ' is not a children of SAMYCore SystemStatus node. This might be due to an error when using the naming convention. Capital letters matter. Please review it.'
               raise SystemError(string)


    def setControlStateVariablesDataTypesNodesIds(self):
        for node in self.controlStateVariablesNodesIds:
             self.controlStateVariablesDataTypesNodesIds.append( self.client.get_node(node).get_data_type() )
        print("setControlStateVariablesDataTypesNodesIds    ", self.controlStateVariablesDataTypesNodesIds)

    def getDataBaseParameter(self, parameterName):
        rootNode = self.client.get_root_node()
        paramQualifiedName = str(self.namespaces['http://SAMY.org/DataBase']) + parameterName
        browsePath = ["0:Objects", "0:Server", paramQualifiedName]
        return rootNode.get_child(browsePath)


    def getNamespaces(self):
        rootNode = self.client.get_root_node()
        browsePath = ["0:Objects", "0:Server", "0:NamespaceArray"]
        namespaceArrayNode = rootNode.get_child(browsePath)
        namespaces = namespaceArrayNode.get_value()
        for i, namespace in enumerate(namespaces):
             self.namespaces[namespace] = i

    def getSystemStatusNode( self ):
        rootNode = self.client.get_root_node()
        objectNode = rootNode.get_child("0:Objects")
        childrenNodes = objectNode.get_children()
        systemStatusNode = None
        for child in childrenNodes:
            if child.get_browse_name().Name == 'SystemStatus':
               systemStatusNode = child 
               break
        if( systemStatusNode == None ):
            string = 'The SAMYCore does not have the expected structure. SystemStatus node is missing.'
            raise SystemError(string)
        elif( len( systemStatusNode.get_children() ) == 0 ):
            string = 'The SAMYCore does not have the expected structure. SystemStatus node has no children.'
            raise SystemError(string)
        else:
            return systemStatusNode

    def getSkillParameters(self, nextSkillNodeId):
            print('\n\n readNodeAndPrintType \n', nextSkillNodeId)
            skillNode = self.client.get_node(nextSkillNodeId)
            browsepath = str(self.namespaces['http://opcfoundation.org/UA/DI/']) + ":ParameterSet"
            parameterSetNode = skillNode.get_child(browsepath)
            return parameterSetNode.get_children()


    def readAndPrintSystemStatus(self):
            for key in self.systemStateNodeIds:
                auxNode = self.client.get_node(self.systemStateNodeIds[key])  
                nextSkillNodeId = auxNode.get_value()
                print(key,'-----------------------------------------------------------------')
                print(nextSkillNodeId)
                print('\n')


    def printAgents(self, detailedSkills = False):
        for agent in self.agents:
            print('--------------------------------------------------------------------------')
            pprint.pprint(self.agents[agent].__dict__)
            if( detailedSkills ):
                for skill in self.agents[agent].skills:
                    pprint.pprint(self.agents[agent].skills[skill].__dict__)
            print('--------------------------------------------------------------------------')


    def printNodesNamesAndTypes(self, arrayOfNodes):
            for param in arrayOfNodes:
                val = param.get_value()
                print(param.get_browse_name())
                print(type(val))


