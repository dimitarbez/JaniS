int lightPin = A0;
int red = 11;
int green = 12;
int blue = 13;
int val;

void setup() {
 
  pinMode(lightPin, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
}

void loop() 
{
  val = analogRead(lightPin);
  if (val >=300)
  {

  digitalWrite(red,HIGH);  
    
  }
   
else

    if(val >=600)
    {
    
    digitalWrite(green,HIGH);
    }

else

   if(val>=900)
   {
   digitalWrite(blue,HIGH); 
   }
}
