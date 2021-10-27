from abc import ABC
import numpy as np
from .PDDL import PDDL_Parser
import pprint

class PDDLDomain():
    def __init__(self, name_, requirements_, types_, objects_, actions_, predicates_):
        self.domain_name = name_
        self.requirements = requirements_
        self.types = types_
        self.objects = objects_
        self.actions = actions_
        self.predicates = predicates_

    def print(self):
        print('------------PDDL DOMAIN------------\n')
        print("Domain name: ", self.domain_name)
        print("Domain requirements: ", self.requirements)
        print("Domain types: ", self.types)
        print("Domain objects: ", self.objects)
        print("Domain actions: ")
        for action in self.actions:
           print(self.actions[action])
        print("Domain predicates: ", self.predicates)
        print('\n------------------------')
        print("\n\n")


class PDDLProblem():
    def __init__(self, problemName_, objects_, initialState_, positiveGoals_, negativeGoals_ ):
        self.problemName = problemName_
        self.objects = objects_
        self.initialState = initialState_
        self.positiveGoals = positiveGoals_
        self.negativeGoals = negativeGoals_

    def print(self):
        print('\n---------------------PROBLEM--------------------------')
        print('Problem name: ' + self.problemName)
        print('Objects: ' + str(self.objects))
        print('State: ' + str(self.initialState))
        print('Positive goals: ' + str(self.positiveGoals))
        print('Negative goals: ' + str(self.negativeGoals))
        print('----------------------------------------------------------\n')


class PDDLAction():
    def __init__(self, name_, parameters_, positiveConditions_, negativeConditions_, addEffects_, deleteEffects_):
        self.name = name_
        self.parameters = parameters_
        self.positiveConditions = positiveConditions_
        self.negativeConditions = negativeConditions_
        self.addEffects = addEffects_
        self.deleteEffects = deleteEffects_

    def print(self):
        print("Action name: ", self.name)
        print("Action parameters: ", self.parameters)
        print("Action positive conditions: ", self.positiveConditions)
        print("Action negative conditions: ", self.negativeConditions)
        print("Action add effects: ", self.addEffects)
        print("Action delete effects: ", self.deleteEffects)


class PDDLActionInstance(PDDLAction):
    def __init__(self, name_, parameters_, positiveConditions_, negativeConditions_, addEffects_, deleteEffects_, instanceParameters_):
        super().__init__(name_, parameters_, positiveConditions_, negativeConditions_, addEffects_, deleteEffects_)
        self.instanceParameters = instanceParameters_
        self.parametersToInstanceParametersMap = {}
        self.setInstanceParamsToArgumentsMap()

    def setInstanceParamsToArgumentsMap(self):
        for i, argument in enumerate(self.parameters):
           self.parametersToInstanceParametersMap[argument[0]] =  self.instanceParameters[i]

    def print(self):
        print("----------------------PDDL ACTION INSTANCE----------------------")
        print("Action name: ", self.name)
        print("Action parameters: ", self.parameters)
        print("Action positive conditions: ", self.positiveConditions)
        print("Action negative conditions: ", self.negativeConditions)
        print("Action add effects: ", self.addEffects)
        print("Action delete effects: ", self.deleteEffects)
        print("Action Instance parameters: ", self.instanceParameters)
        print("Parameters To Instance parameters map: ")
        pprint.pprint(self.parametersToInstanceParametersMap)
        print("----------------------------------------------------------------")


class PDDLPlan():
    def __init__(self, actions_, robotsActionsRequeriments_, actionsRequired_):
        self.actions = actions_
        self.robotsActionsRequeriments = robotsActionsRequeriments_
        self.actionsRequired = actionsRequired_

    def print(self):
        print('------------PDDL PLAN------------\n')
        print('------REQUIRED ACTIONS BY AGENT------')
        pprint.pprint(self.robotsActionsRequeriments)
        print('\n------PLAN------')
        for action in self.actions:
           action.print()

        print('------------------------')
        print("\n\n")


class PDDLPlanParser():
    def __init__(self, pathToPlan_, domain):
        self.pathToPlan = pathToPlan_
        self.PDDLactions = [] # PDDL actions in the form of name of the action (according to the domain) and the arguments
        self.robotsActionsRequeriments = {}
        self.actionsRequired = []

    def processActionInstance(self, actionName, domain, instanceParameters):
        pos = []
        neg = []
        params = []
        addEffect = []
        delEffect = []
        for action_pos_condition in domain.actions[actionName].positive_preconditions:
            aux = []
            aux.append(action_pos_condition)
            posCondArray =[x for xs in aux for x in xs]
            predicateType = posCondArray.pop(0)
            pos.append([predicateType, posCondArray] )
        for action_neg_condition in domain.actions[actionName].negative_preconditions:
            aux = []
            aux.append(action_neg_condition)
            negCondArray =[x for xs in aux for x in xs]
            predicateType = negCondArray.pop(0)
            neg.append([predicateType, action_pos_condition] )
        for parameter in domain.actions[actionName].parameters:
            params.append(parameter)
        for effect in domain.actions[actionName].add_effects:
            aux = []
            aux.append(effect)
            effectCond =[x for xs in aux for x in xs]
            effectType = effectCond.pop(0)
            addEffect.append([effectType, effectCond])
        for effec in domain.actions[actionName].del_effects:
            aux = []
            aux.append(effect)
            effectCond =[x for xs in aux for x in xs]
            effectType = effectCond.pop(0)
            delEffect.append([effectType, effectCond])
        return PDDLActionInstance(actionName, params, pos, neg, addEffect, delEffect, instanceParameters) 

    def parse_plan(self, domain):
        with open(self.pathToPlan) as fp:
           line = fp.readline()
           cnt = 1
           while line:
              if(line[0] != ';'): # Avoid lines like ;;!domain: samy-min-strips2
                 line = line.replace('(','') # Removes parenthesis from 0.000: (move-to-pickup r o rsrc rstart src) -> 0.000: move-to-pickup r o rsrc rstart src
                 line = line.replace(')','')
                 line = line.replace('\n','')
                 line = lineSplit = line.split(' ') # Removes 0.000: from 0.000: move-to-pickup r o rsrc rstart src -> move-to-pickup r o rsrc rstart src
                 lineSplit.pop(0) # move-to-pickup r o rsrc rstart src
                 name = lineSplit.pop(0)
                 aux = self.robotsActionsRequeriments.get(lineSplit[0])
                 if( isinstance(aux, list) ):
                    self.robotsActionsRequeriments[lineSplit[0]].append(name)
                 else:
                    self.robotsActionsRequeriments[lineSplit[0]] = [name]
                 self.PDDLactions.append( self.processActionInstance( name, domain, lineSplit) )
                 if not name in self.actionsRequired:
                     self.actionsRequired.append(name)
              line = fp.readline()
              cnt += 1


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


    def parseConfigurationFile(self):
        if( configurationPath_ == None):
           print("Trying to read the file: "
        else:
           print("Trying to read the file: "


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


  
