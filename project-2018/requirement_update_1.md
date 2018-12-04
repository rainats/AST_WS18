# Real World Data Analysis

We have deployed your code on the robot. And the robot has diven the following real data.

| sensor 1 input | sensor 2 input |
|----------------|----------------|
|[(knife,1, 99%), (scissor, 2, 65%), (spoon, 3, 33%), (spoon, 4, 80%), (keys, 5, 95%)] | [ (keys, 5, 95%), (spoon, 4, 99%),(fork, 3, 99%), (scissor, 2, 95%),  (knife,1, 55%)]|
| [empty list] | [empty list] |
| [(knife,1, 99%), (scissor, 2, 65%), (spoon, 3, 33%)] | [empty list] |
| [(knife,1, 99%), (scissor, 2, 65%), (spoon, 3, 33%)] | [(KNIFE,1, 99%), (SCISSOR, 2, 65%), (SPOON, 3, 33%)] |
| [(knife,1, 99%), (scissor, 2, 65%)] | [(fork, 3, 99%), (spoon, 4, 99%)] |
| [(knife,1, 94%),(knife,1, 69%),(knife,1, 89%)]|[(knife,1, 99%),(fork, 3, 99%)] |

## Task
* Please test you code with the following input and report the output.
* If the code didnot run for the following output report the case for the failure, update the code and run the test.


# Increase of input

This week we found out that we can add 2 new deep learning algortihms has been found to be showing state-of-the art performance
for object recognition tasks.
1. Image matching algorithm [1]
2. RGB-D Object Detection and Semantic Segmentation for Autonomous Manipulation in Clutter [2]

So now we have info from 4 different input sources:
| Sensor 1 (algo 1) | Sensor 1 (algo 2)|  sensor 2 (algo 1) | sensor 2 (algo 2)|
|-------------------|------------------|--------------------|------------------|
|[(knife, 1, 89%)]  | [(knife, 1, 35%)] | [(knife, 1, 69%)] | [(knife, 1, 80%)]|

## Task

* Update your code for the following new information.
* Does your code follow the "S.O.L.I.D" principle of "OPen for update but close for changes" ? If yes how ?
* How to test the "Open for update" principle ? You should only add new lines of code and update least line of code.
* Another test for principle? If next time a modality needs to be removed then by commenting out some lines of code should suffice.
* If it doesnt follow the principle , find which design pattern will help? Refactor your code for the design pattern.
* Write test cases.
* Create an csv sheet or table to mention all the test cases you are trying .

## Points

    * 10 Working in group
    * 10 Working with issues in github (converting requirements to github issues, commiting to them and closing them on completion)
    * 10 Working with branch and using pull request to update the master code(No commit to master code)
    * 30 TDD appraoch
    * 20 Using Design Patterns
    * 20 Solution





## References
[1] Robotic  Pick-and-Place  of  Novel  Objects  in  Clutter
with  Multi-Affordance  Grasping  and  Cross-Domain  Image  Matching
[2] Max Schwarz, Anton Milan, Arul Selvam Periyasamy, and Sven Behnke:
RGB-D Object Detection and Semantic Segmentation for Autonomous Manipulation in Clutter
Accepted for International Journal of Robotics Research (IJRR), Sage Publications, to apprear 2017.
Available at: http://ais.uni-bonn.de/papers/IJRR_2017_Schwarz.pdf
