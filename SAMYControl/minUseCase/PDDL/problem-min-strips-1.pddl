(define (problem samy-min-strips-1) (:domain samy-min-strips)
(:objects
 r - robot
 o - movable
 src dst - staticpose ; object locations
 rstart rsrc rdst - staticpose ; robot poses
)

(:init
 (is-at o src) ; the object is at the src location
 (is-at r rstart) ; the robot is in its start pose
 (free dst) ; the destination location is free
 (free r) ; the robot is not holding anything
 (current-status ok) ; no error
 (gripper-open r) ; the gripper is open
 (can-pick-from r o rsrc src) ; the robot in the rsrc pose can pickup the object from the src pose
 (can-place-to r o rdst dst) ; the robot in rdst pose can place the object to dst pose
)

(:goal (and
 (is-at o r) ; the robot is holding the object
 (is-at r rdst) ; the robot is at the destination placement position
 (gripper-closed r) ; the gripper is closed

)
))



