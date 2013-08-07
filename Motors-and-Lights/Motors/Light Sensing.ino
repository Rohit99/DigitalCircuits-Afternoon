#include<Servo.h>

Servo pikachu;
Servo charizard;

int pocket;
int pos;
int pos2;
int pocket2;

void setup()
{
  pikachu.attach(9);
  charizard.attach(10);
  
  Serial.begin(9600);
 
}
void loop()
{
  pocket = analogRead(A0); 
  Serial.println(pocket);
  
  pos = map(pocket,800,1000,0,180);
  //Serial.println(pos);
  pikachu.write(pos);
  

  charizard.write(pos);
  delay(10);
   
  
   
}
