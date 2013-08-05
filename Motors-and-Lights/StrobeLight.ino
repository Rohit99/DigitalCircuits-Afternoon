void setup()
{
 pinMode(13,OUTPUT);//This allows 13 to source (a lot of amps)
}

void loop()
{
digitalWrite(13,HIGH);
delay(10); //This keeps your arduino from bricking
digitalWrite(13,LOW);
delay(1000);
};
