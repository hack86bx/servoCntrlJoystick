//add the aervo library
#include <Servo.h>

//define our servos
Servo servo1;
Servo servo2;

//define joystick pin (Analog)
int joyX =0;
int joyY =1;

//variable to read the values from the analog pins 
int joyVal;

void setup()
{ //attaches our servos on pins PWM 3-5
  servo1.attach(3);
  servo2.attach(5);
}

void loop()
{
  //read the value of joystick (between 0-1023)
  joyVal = analogRead(joyX);
  joyVal = map (joyVal, 0, 1023, 0, 180); //servo value between 0-180
  servo1.write(joyVal); //set the servo position according to the joystick value

  joyVal = analogRead(joyY);
  joyVal = map (joyVal, 0, 1023, 0, 180);
  servo2.write(joyVal);
  delay(15);
}
