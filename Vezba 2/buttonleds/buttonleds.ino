#define led_1 5
#define led_2 4
#define led_3 3
#define led_4 2
#define button_1 6
#define button_2 7
#define button_3 8
#define button_4 9

unsigned long lastEvent =0;
boolean ledON = false;
void setup()
{
 pinMode(led_1,OUTPUT);
 pinMode(led_2,OUTPUT);
 pinMode(led_3,OUTPUT);
 pinMode(led_4,OUTPUT);
 pinMode(button_1,INPUT);
 pinMode(button_2,INPUT);
 pinMode(button_3,INPUT);
 pinMode(button_4,INPUT);

}

void loop() 
{
  int button1State = digitalRead(button_1); 
  
  if (button1State==HIGH)
  {
    if(millis()-lastEvent >50)
    {
      ledON = !ledON;
    digitalWrite(led_1, ledON ? HIGH:LOW);
  }

  lastEvent =millis();
  }



  int button2State = digitalRead(button_2); 
  
  if (button2State==HIGH)
  {
    if(millis()-lastEvent >50)
    {
      ledON = !ledON;
    digitalWrite(led_2, ledON ? HIGH:LOW);
  }

  lastEvent =millis();
  }



    int button3State = digitalRead(button_3); 
  
  if (button3State==HIGH)
  {
    if(millis()-lastEvent >50)
    {
      ledON = !ledON;
    digitalWrite(led_3, ledON ? HIGH:LOW);
  }

  lastEvent =millis();
  }




    int button4State = digitalRead(button_4); 
  
  if (button4State==HIGH)
  {
    if(millis()-lastEvent >50)
    {
      ledON = !ledON;
    digitalWrite(led_4, ledON ? HIGH:LOW);
  }

  lastEvent =millis();
  }
}
