from SAMYControlInterface import * 
from SAMYControllerBase import SAMYControllerBase
from .PDDLbasedControllerHelper import *


class PDDLbasedController(SAMYControllerBase):

    def __init__(self, pathToDomain_, pathToProblem_, pathToPlan_, configurationPath_ = None):
        super().__init__()
        self.pathToDomain = pathToDomain_
        self.pathToPlan = pathToPlan_
        self.pathToProblem = pathToProblem_
        self.configurationPath = configurationPath_
        self.domain, self.problem = self.parseDomainAndProblem()
        self.plan = self.parsePlan() #PDDLPlan 
        self.internalPDDLactionParameters = ['robot', 'movable'] # parameter types appearing in actions that are only internal for solving the PDDL problem, but not relevant for the SAMYCore
        self.PDDLStateVariables = {} # Array of required PDDL predicate variables that describe the relevant system state for the plan
        self.controlStateVariables = [] # Array of SAMYCore SystemStatus variables names required by the PDDL Plan that will be tracked (either through configuration file or using naming convention)

        self.setPDDLStateVariables()
   
        self.generateConfigurationTemplate()
        self.domain.print()
        self.problem.print()
        self.plan.print()

        pprint.pprint(self.PDDLStateVariables)


    def generateConfigurationTemplate(self):
        confTemplate = "### CONFIGURATION FILE FOR PDDL BASED CONTROLLER ###\n"
        confTemplate = confTemplate + "\n### AGENTS SECTION ### Map of agent names in PDDL plan and SAMYCore. If no name is provided, the one in PDDL is used\n"
        for robot in self.plan.robotsActionsRequeriments:
            confTemplate = confTemplate + robot + ":\n"
        confTemplate = confTemplate + "\n\n### ACTIONS SECTION ### Map from PDDL actions to SAMYCore skills. If no name is provided, the on in PDDL is used. Each parameter in PDDL actions must match one SAMYCore ParameterSkill index \n"
        for action in self.plan.actionsRequired:
            confTemplate = confTemplate + action + ":\n"
            for param in self.domain.actions[action].parameters:
                if( not param[1] in self.internalPDDLactionParameters ):
                    confTemplate = confTemplate + "\t" + param[1] + ":\n"

        confTemplate = confTemplate + "\n\n### STATE VARIABLES SECTION ### Map of required PDDL variables to SAMYCore boolean variables that describe system state for the PDDL plan. These varibles will be tracked in the control loop.\n"

        for predicateType in self.PDDLStateVariables:
            for arguments in self.PDDLStateVariables[predicateType]:
                confTemplate = confTemplate + predicateType + " " + str(arguments) + ":\n"

        f = open("PDDLbasedController_Configuration_File.txt", "w")
        f.write(confTemplate)

    def setPDDLStateVariables(self):
         for action in self.plan.actions:
            if( not action.instanceParameters[0] in self.PDDLStateVariables): # In every action, the first parameter indicates the agent performing the action
               self.processActionInstanceVariables(action)
            
    def processActionInstanceVariables(self, pddlActionInstance ):
        for cond in pddlActionInstance.positiveConditions:
            self.processPredicate(pddlActionInstance, cond)
        for cond in pddlActionInstance.negativeConditions:
            self.processPredicate(pddlActionInstance, cond)
        for effect in pddlActionInstance.addEffects:
            self.processPredicate(pddlActionInstance, effect)
        for effect in pddlActionInstance.deleteEffects:
            self.processPredicate(pddlActionInstance, effect)

    def processPredicate(self, pddlActionInstance, argument ):
        agent = pddlActionInstance.instanceParameters[0]
        actionName = pddlActionInstance.name
        actionParameters = pddlActionInstance.parameters

        predicateType = argument[0]
        predicateArguments = argument[1]
        predicateArgumentsInstance = []
        for arg in predicateArguments:
            if( arg[0] == '?' ):
                predicateArgumentsInstance.append( pddlActionInstance.parametersToInstanceParametersMap[arg] )
            else:
                predicateArgumentsInstance.append( arg )

        print("predicateType   ", predicateType, "   predicateArguments   ", predicateArgumentsInstance )

        if( not predicateType in self.PDDLStateVariables ):
            self.PDDLStateVariables[predicateType] = []

        if( not predicateArgumentsInstance in self.PDDLStateVariables[predicateType] ):
            self.PDDLStateVariables[predicateType].append( predicateArgumentsInstance )


    def parseDomainAndProblem(self):
        parser = PDDL_Parser()
        parser.parse_domain(self.pathToDomain)
        domain = PDDLDomain(parser.domain_name, parser.requirements, parser.types, parser.objects, parser.actions, parser.predicates)
        parser.parse_problem(self.pathToProblem)
        problem = PDDLProblem(parser.problem_name, parser.objects, parser.state, parser.positive_goals, parser.negative_goals)
        return domain, problem

    def parsePlan(self):
        parser = PDDLPlanParser(self.pathToPlan, self.domain)
        parser.parse_plan(self.domain)
        return PDDLPlan(parser.PDDLactions, parser.robotsActionsRequeriments, parser.actionsRequired)

        # Array of variable names in the SAMYCore SystemState variable, that represents the state of the system (for this controller)
       # self.controlStateVariables = []



    def interalTransitionsThrower(self):
        """
        This function observes events in the SAMYCore
        Converts the standard representation of the controller state into the internal representation
        """


    def standardStateToInternalState(self, standardState):
        """
        State is an array of numeric and categorical values that represents the state of the system according to the SAMYControllerInterface
        Converts the standard representation of the controller state into the internal representation
        """
        pass



    def predict(self, internalState):
        """
        Given a state in its internal representation, predicts/computes the next action to perform in the internal representation
        """
        pass




    def internalSystemActionToStandardSystemAction(self, internalAction):
        """
        Converts the internal representation of the system action into the standard system action representation (returns a SAMYSystemAction)
        """
        pass


