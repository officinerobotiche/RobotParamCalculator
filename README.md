RobotParamCalculator
====================

Tool to automatically calculate the parameters to be used to configure a robot using uNav and ROS

The tool applies the formulas explained at
* http://www.officinerobotiche.it/tutorial/encoder/
* http://www.officinerobotiche.it/tutorial/interfacciamento-encoder/
[use Google translate if you do not speak italian]

The parameters calculated by the tool must be replaced in the file "yaml" of your robot according to the configuration used in the repository https://github.com/officinerobotiche/example_robot_ros

Dependencies
------------
The tool can be compiled only with Qt5 support
You must install Qt5 dependencies:
```bash
$ sudo apt-get install qt5-default qt-creator
```

###Support
Feel free to ask for help, submit suggestions, satisfy your curiosity on our [**Users Group**](https://groups.google.com/forum/?hl=it#!forum/unav-users)
