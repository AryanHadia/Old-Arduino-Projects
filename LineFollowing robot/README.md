# Just a small project of LineFollower Robot
- built in 2025/2/24
- status : working (it's one of my first(training) projets and it's very simple. right now it may have many bugs but can be fixed)

## What is Actually a LineFollower robot ?
 - This type of robots are Designed to move on a white or black line (this program is for black lines) to reach a point in minimum time (and return to starting point in some programs)

## Robot parts
- An aduino UNO (micro Controller)
- Two 5v Geared motor
- A L298N driver (controlling motors)
- Four Inflared Sensors 

## How this code is Actually working
- First the sensors scan the floor below them
- The arduino start Processing the movement by the Value that recived by the sensores
- Send the binary code to the motor driver
- The motor driver moves the robot by the binary arduino request (there are three movements(Straight / Right turn / Leftt turn / Fully turn))

## Main code
- Main code is in the s3.ino

## How it can be Expand
- Adding more movement to program (first version is very simple)
- The robot is good at route finding and it slow (you car use a beter motors)
- At the first version robot is only programed to work on black line (not the white line). in future it can get programed to work on white or other colorsaa