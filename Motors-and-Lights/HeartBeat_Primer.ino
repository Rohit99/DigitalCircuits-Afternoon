void setup()
{
 pinMode(9,OUTPUT);//This allows 13 to source (a lot of amps)
}

void loop()
{
  analogWrite(9,255);//always on
  delay(1000);
  analogWrite(9,128); // on half the time
  delay(1000);
  analogWrite(9,64);
  delay(1000);
  analogWrite(9,32);
  delay(1000);
  analogWrite(9,16);
  delay(1000);
  analogWrite(9,8);
  delay(1000);
  analogWrite(9,4);
  delay(1000);
  analogWrite(9,2);
  delay(1000);
  analogWrite(9,1);
  delay(1000);
