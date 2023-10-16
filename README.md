# Creating ROS 2 Action: Countdown alert for a warehouse robot (General Idea)

Three-part architecture – goal, feedback, and result – makes ROS actions especially well-suited for long-running tasks. It’s no surprise, then, that actions are most often used by robots for navigation tasks.

![image](https://github.com/bonesgone/Week_7_Homework/assets/64888324/6755bbcd-b27f-4fd4-a8d4-8caead12262c)


If a fleet operator wanted to send a warehouse AMR to a particular aisle a few minutes away, for example, they can initiate a ROS action with that destination as the goal. While on its journey, the robot could broadcast feedback back to the operator about how far it has traveled along its designated route.

If requirements change, and the operator decides to send the AMR to a different aisle, they have the option to cancel the first action and initiate a new one to reroute the robot to a different destination. Otherwise, if the robot successfully reaches its destination, it sends a final confirmation back to the operator, confirming its arrival.

***My action file is about creating an action that alerts a warehouse robot when it's time for it to start its shift. The action should start counting down from a given number, broadcast updates as it progresses, then finally announce when it’s reached zero.***

_For explanation of the code, please review the source codes of **countdown_server.py** and **countdown_client.py**._

### Sending a goal to the action-server
![image](https://github.com/bonesgone/Week_7_Homework/assets/64888324/85d28b57-42ce-4f5c-9d8d-583a374869b6)

### Results and feedback from the action-server
![image](https://github.com/bonesgone/Week_7_Homework/assets/64888324/61568cb1-55a0-4c3e-bfc6-0ee19c333290)

