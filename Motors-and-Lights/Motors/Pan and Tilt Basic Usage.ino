#include <Servo.h>

Servo Tom;
Servo Jerry;

void setup()
{
 Tom.attach(9);
 Jerry.attach(10);
}

void loop()
{
  Tom.write(90);
  Jerry.write(90);
   delay(1000);
   
//look left and right
 Jerry.write(0);
 delay(1000);
 Jerry.write(180);
 delay(1000);
 
//look straight ahead
 Tom.write(90);
  Jerry.write(90);
   delay(1000);
//look left and right
  Jerry.write(0);
  delay(1000);
  Jerry.write(180);
}
