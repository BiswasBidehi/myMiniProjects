# ObstacleAvoidingRover
It was for my student Susan Shah

#### Arduino:
It is (ADC)Analog to Digital Converter.It can receive analog value from any input device.

### Motor shield:
It is used for operate bipolar stepper motor with the help of commands.

### Bipolar stepper motor:
It has two polarities, positive and negative, so its high and low voltages would be something like 2.5V and -2.5V. 

### Servo motor:
The servo motor is controlled by a signal (data) better known as a pulse-width modulator (PWM).A servo motor at every "joint" of a robot is used to actuate movements, giving the robot arm its precise angle.

### Ultrasonic Sonar Sensors:
Robot will 'ping' (trigger or command) the Ultra sound sensor .Sensor will then emit sound wave. then sound wave will simply bounce back or reflect back and will reach sensor which emitted it .

### 2200 mah lipo battery:
For suppling power we use this powerful battery.


### Process:
1. First we send sound wave and receive the reflected weve with sensor.
2. The sensor then send an analog signal to Arduino.
3. Arduino calculate the distence with the help of command.
4. Then with the help of command Arduino send signal to motor shield and servo motor.
5. The motor shield then operate the stepper motors. So the robot can move freely avoiding obstacle.


### Advantages of ultrasonic inspection as a method of Non-Destructive Examination are:

* Internal defects can be detected and sized when a validated procedure is applied
* Thick specimens take no more time to examine than thin ones, assuming correct instrumentation set up
* Access to only one side of the component is needed
* There is no radiation hazard in ultrasonic examination, and hence no disruption of work as there is with radiography
* Volumetric and crack like defects can be detected, irrespective of their orientation


### Disadvantages of ultrasonic inspection as a method of Non-Destructive Examination are:

* A high degree of operator skill and integrity is needed. Hence, the need for trained and certified NDT personnel
* In most examinations, there is no permanent record of the inspection as there is in radiography, however more recent equipment does offer this facility
* In certain materials, like austenitic steel, the large grain size found in welds can cause attenuation and this may mask defects
* Spurious indications, and the misreading of signals, can result in unnecessary repairs, which is why a validated procedure should be applied when carrying out any ultrasonic examination.

