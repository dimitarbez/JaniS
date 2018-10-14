int lightPin = 0;
int red = 11;
int green = 12;
int blue = 13;


void setup() {
 
  pinMode(lightPin, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
}

void loop() 
{
  if (lightPin >100)
  {
  digitalWrite(red,HIGH);  
    
  }
   
else

    if(lightPin >150)
    {
    
    digitalWrite(green,HIGH);
    }

else

   if(lightPin>200)
   {
   digitalWrite(blue,HIGH); 
   }
}
