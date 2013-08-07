#include <Servo.h>

Servo Pan;
Servo Tilt;

int panPos;
int tiltPos;
void setup()
{
  Pan.attach(9);
  Tilt.attach(10);
}


void loop()
{
  panPos = analogRead(A0);
  Pan.write(analogRead(A0));
  Serial.println(panPos);
  tiltPos = analogRead(A1);
  Tilt.write(analogRead(A1));
  Serial.println(tiltPos);
  delay(10);
}
