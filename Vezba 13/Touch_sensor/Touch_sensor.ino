#define led 5
#define touch 6

unsigned long lastEvent =0;
boolean ledON = false;
void setup()
{
 pinMode(led,OUTPUT);
 pinMode(touch,INPUT);

}

void loop() 
{
  int touchState = digitalRead(touch); 
  
  if (touchState==HIGH)
  {
    if(millis()-lastEvent >50)
    {
      ledON = !ledON;
    digitalWrite(led, ledON ? HIGH:LOW);
  }

  lastEvent =millis();
  }
  
}
