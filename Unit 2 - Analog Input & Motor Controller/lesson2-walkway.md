# OUTLINE  
> Day 1: PWM and LED Potentimeter  
> Day 2: Motor classes and their Main Function  
> Day 3: Motor Vibration and DC motor stuff
> Day 4: [Project](project2files/project2.md)  

# PWM and LED Potentimeter  
Please create the circuit below:
![d1Circurit](Images/d1.png)  
This is a basic circuit that has potential to create the basic PWM Output and Analog Input,  
Analog input and Output has a slight issue where the Microcontroller(ATMEGA) will read it as  
4 times what usually the PWM can output. This creates a issue if we were to feed the  
Analog Input into the PWM's write function it would not work or will break the LED. So you'll
be using the / function to divide a number by 4.  
the functions you'll be using today should appear underneath.  
    analogRead(pin); //for reading the value of the a analog input least is 0 most is 1025
    analogWrite(pin, brightness); //used to control the PWM least is 0 most is 255

Your source code will be provided [here](d1.ino)  

REMEMBER THIS IS NOT A HIGH-LEVEL LANGUAGE, BINDING CERTAIN INTERGER IS NECESSARY

# Motor classes  
Today you'll learn about the different motors included in your kit provided. The motors  
in your kits include:
 *DC motor  
 *Servo motor  
 *Stepper motor

DC motor, using a magnetic field changing irreversabily, to make something spin
![DCMotor](Images/8pdm.gif)  

Servo motors, like DC motors have the same moving part but some only extend to a certain amount,  
the upside of having a servo is that you can always know the degree the motor is at. Using a set of  
gears to make the gear spin faster than the power given, since there is also a potientmeter to determine  
the degree, its a bit more thicc.  
![ServoMotor](Images/SG90_gear_exposed.gif)  

Stepper motor, Unlike servo motors can carry heavier stuff at higher speed, the stepper motor uses a complex  
system of motors to make something spin, not exactly fast but spin in a impressive amount of torque.  
![StepperMotor](Images/StepperMotor.gif)  

# Motor Vibration  
Motor's poleraity is irreversable, you can hook a battery one way and it will spin another way, today we'll be  
exploring this by checking everything  

# PROJECT 2  
[Project2](project2files/project2.md)  
