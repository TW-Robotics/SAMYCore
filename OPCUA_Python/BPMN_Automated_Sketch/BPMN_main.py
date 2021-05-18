# -*- coding: utf-8 -*-
import numpy as np
import typing
import pycamunda.variable
import pycamunda.processdef
import pycamunda.processinst
import pycamunda.deployment
import pdb
import worker
import time
import urx
from urx.robotiq_two_finger_gripper import Robotiq_Two_Finger_Gripper
import sys
from math import pi as pi



if __name__ == '__main__':

    key = 'BPMN_Automated_Sketch'
    url = 'http://localhost:8080/engine-rest'
    SAMYCore = 'opc.tcp://localhost:4841'

    # Get and delete old tasks
    current_tasks = pycamunda.processinst.GetList(url=url)()
    for task in range(len(current_tasks)):
        pycamunda.processinst.Delete(url=url,id_=current_tasks[task].id_)()
    start_instance = pycamunda.processdef.StartInstance(url = url, key = key, business_key=key,case_instance_id = key)
    start_instance()

    robots = parseRobotsFromYAMLFile()
    skills = parseSkillsFromYAMLFile()

    requestedBlocks = functionSoTheUserCanRequestSkills( robots, skills ) # I do not know how are you planning to use BPMN. 
# Here I imagine the following: a GUI where the user can Drag and Drop "blocks". The available blocks are correspond to the skills of the robots. In the YAML file you could indicate which commands are to be exposed in BPMN and which ones should be hidden.
# The output of this function is an array of arrays (an array of robots, and for each robot an array of skills).
# E.g: The user could have 3 robots. For first robot the user would have drag and drop (requested) 4 blocks (4 skills), for the second robot 3 skills, and for the last robot 4 skills
# requestedBlocks =  [   [MoveToWithSpeed, MoveToWithSpeed, PickAndPlace, MoveToWithSpeed],    [PickSkill, Screw, MoveToWithSpeed],    [PickAndPlace, 3DPrint, MoveToWithSpeed, Drill]   ]

# I am not totally sure what is the functionality of the worker concept. I will assume there is one worker per robot.

    workers = []
    i = 0
    for robot in requestedBlocks:
      workers.append( Worker( url )
        for skill in robot
	   skill.addTopicToWorker( workers[i] )
      i++

   for worker in workers:
       worker.run()
    

