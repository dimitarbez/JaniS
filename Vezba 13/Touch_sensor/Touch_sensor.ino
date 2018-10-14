#define led 5
#define touch 6

void setup()
{
 pinMode(led,OUTPUT);
 pinMode(touch,OUTPUT);

}

void loop() 
{
  if (touch==HIGH)
  {
  digitalWrite(led,HIGH);
  }
  else

  {
  digitalWrite(led,LOW);  
  }
  
}
