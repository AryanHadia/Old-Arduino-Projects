# Ultrasonic basic moving program for robot
moving the robot by the distace of the obejects thats are infront it
this is just a basic training one ant it's one of my first programs 
thath I wrote

## Working status
it may have bugs (like getting stuck) but it's working

## robot parts
- Arduino board
- Ultrasonic sensor
- Two geared motors with wheels
- l298n motor driver


## How it working
1) Ultrasonic sensor will send some waves Through the objects
2) The waves gonna turn back after touching the object
3) The waves gonna reach the Ultrasonic 
4) data of Waves gonna send to Arduino board
5) Arduino start Processing the data and sending binery code to the motor driver
6) And finally robot moves by the Arduino decisions

