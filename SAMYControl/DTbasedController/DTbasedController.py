from SAMYControlInterface import * 
from abc import ABC
from SAMYControllerBase import SAMYControllerBase

class DTbasedController(SAMYControllerBase, ABC):
    def __init__(self, root_, x_metadata_, y_metadata_, configurationPath_ = None):
        super().__init__()
        self.root = root_
        self.x_metadata = x_metadata_
        self.y_metadata = y_metadata_
        self.configurationPath = configurationPath_
        # Array of variable names in the SAMYCore SystemState variable, that represents the state of the system (for this controller)
        self.controlStateVariables = []
   #     self.actionType = actionType_ # An array describing the elements of each action input (inputs can be numerical or categorical, and action can be single input or multiinput)
                                                            # Examples: multiinput action -> [ "numeric", "categoric", "numeric", "numeric" ] singleinput action -> ["categorical"] or ["numeric"]
        
        self.setControlStateVariables()

                        
    def setControlStateVariables(self):
        print('setControlStateVariables   ', self.configurationPath)
        if( self.configurationPath == None ):
             self.controlStateVariables = self.x_metadata['variables']
        else:
             try:
                f = open(self.configurationPath, "r")
                lines = f.readlines()
                if(len(lines) != len(self.x_metadata['variables'])):
                    print(lines)
                    string = ('The passed configuration file must contain the names of variables in the SAMYCore SystemState variables, '
                              'one name per line, in the same order that appear in the generated file x_metada generated when the dot file was parsed.')
                    raise SystemError(string)
                else:
                    print('Using the following naming map between DOT file variables and SAMYCore variables:\n')
                    print('DOT file variable -> SAMYCore variable\n')
                    for i, line in enumerate(lines):
                        line = line.replace("\n",'')
                        self.controlStateVariables.append(line)
                        text = self.x_metadata['variables'][i] + ' -> ' + line
                        print(text)
             except:
                string = 'Could not open the file ' + self.configurationPath
                raise SystemError(string)


    def standardStateToInternalState(self, standardState):
        """
        State is an array of numeric and categorical values that represents the state of the system according to the SAMYControllerInterface
        Converts the standard representation of the controller state into the internal representation
        """
        return standardState


    def predict(self, internalState):
        """
        Given a state in its internal representation, predicts/computes the next action to perform in the internal representation
        """
        return self.root.predict(internalState)


    def internalSystemActionToStandardSystemAction(self, internalAction):
        """
        Converts the internal representation of the system action into the standard system action representation (returns a SAMYSystemAction)
        """
        agentsStandardActionsArray = []

        for actionInput in internalAction:   # Actions are always tuples (also single input actions)
            agentsStandardActionsArray.append( self.extractInputActionInformation( actionInput ) )

        return standardSystemAction
        
    # Agent_Skill_NumberOfCommand:ParameterInDataBase_NumberOfCommand:ParameterInDataBase_...
    def extractInputActionInformation(self, actionInput):
            splittedAction = actionInput.split('_')
            agentName = splittedAction[0]
            skillName = splittedAction[1]
            skillParameters = self.processInputActionSkillParameters(splittedAction[2:])
            return SAMYAction( agentName, skillName, skillParameters )


    def processInputActionSkillParameters(self, actionInputParameters):
            skillParameters = []
            for param in actionInputParameters:
                spl = param.split(':')
                commandNumber = spl[0]
                value = spl[1]
                if( len(commandNumber)>0 and commandNumber.isdigit() and len(dataBaseElement)>0 ):
                      if( commandNumber not in skillParameters ):
                           # Extend it to include non direct DataBaseReference (composing of CRCLCommandParameterSet from other elements)
                           actParam = SAMYActionParameter( commandNumber, 'DataBaseReference', value)
                           skillParameters.append( actParam )
                      else:
                          string = 'The same parameter of the skill is appearing twice in the action input: ' + actionInputParameters
                          raise SystemError(string)
                else: 
                    string = 'The action in the controller is not valid: ' + actionInput
                    raise SystemError(string)

            return skillParameters






