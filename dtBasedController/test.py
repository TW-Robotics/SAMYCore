import DTbasedController
import glob
import filecmp

#dotFilesArray = glob.glob('./decision_trees/*/*/*.dot')

#print('Number of files to analyze: ', len(dotFilesArray) )
#print(dotFilesArray)

#filesToReview = []
#for dotFile in dotFilesArray:
#    DTbasedController.DTbasedController(dotFile)
#    modified_name = dotFile + '_test'
#    comp = filecmp.cmp(dotFile, modified_name)
#    if(comp):
#       print('Generated file is the same than original!')
#    else:
#       filesToReview.append(modified_name)
#       print('ERROR!!!!!! Generated file ', modified_name, ' is not the same than the original!!')

#print('\n\n\n\n', filesToReview)



#DTbasedController.DTbasedController('./decision_trees/sc-aa/blocksworld.5/sc-aa.dot')
#DTbasedController.DTbasedController('./decision_trees/extra3/firewire_abst/extra3.dot')
#DTbasedController.DTbasedController('./decision_trees/mc_grouping-aa/firewire_abst/extra3.dot')

DTbasedController.DTbasedController('./useCaseExample.dot')

#controller = DTbasedController.DTbasedController('./firewire_abst/extra2.dot')
#controller = DTbasedController.DTbasedController('./cartpole/extra2.dot')
#controller = DTbasedController.DTbasedController('./testCSV/extra2.dot')
#controller = DTbasedController.DTbasedController('./decision_trees/lgreg-aa/cartpole/lgreg-aa.dot')




#print(controller.graphNodes[0].pydotNode.__dict__)

#print(controller.graphNodes[0].pydotNode.get_label())
#print(controller.graphNodes[0].pydotNode.get_name())
#print(controller.graphNodes[1].pydotNode.get_label())
#print(controller.graphNodes[2].pydotNode.get_label())
#print(controller.graphNodes[1].pydotNode.__dict__)
#print(controller.graphNodes[1].pydotNode)
#print(controller.graphNodes[1].pydotNode.parent_node_list)
#for graphNode in controller.graphNodes:
#    print(graphNode.__dict__)

#for graphEdge in controller.graphEdges:
#    print(graphEdge.__dict__)

