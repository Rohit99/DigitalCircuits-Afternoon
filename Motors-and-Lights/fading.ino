void setup()
{
 pinMode(9,OUTPUT);//This allows 13 to source (a lot of amps)
}

void loop()
{

for(int i = 25; i >= 0 ; i--)
  {
  analogWrite(9,i);//always on
  delay(10);
  }

}
