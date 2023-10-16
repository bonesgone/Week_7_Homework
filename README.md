# Creating ROS 2 Action

Three-part architecture – goal, feedback, and result – makes ROS actions especially well-suited for long-running tasks. It’s no surprise, then, that actions are most often used by robots for navigation tasks.

If a fleet operator wanted to send a warehouse AMR to a particular aisle a few minutes away, for example, they can initiate a ROS action with that destination as the goal. While on its journey, the robot could broadcast feedback back to the operator about how far it has traveled along its designated route.

If requirements change, and the operator decides to send the AMR to a different aisle, they have the option to cancel the first action and initiate a new one to reroute the robot to a different destination. Otherwise, if the robot successfully reaches its destination, it sends a final confirmation back to the operator, confirming its arrival.

My action file is about creating an action that alerts a warehouse robot when it's time for it to start its shift. The action should start counting down from a given number, broadcast updates as it progresses, then finally announce when it’s reached zero.

