#define led_1
#define led_2

#define button_1
#define button_2
#define button_3


void setup() {
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(button_1, INPUT);
  pinMode(button_2, INPUT);
  pinMode(button_3, INPUT);
}

void loop() {
  if(button_1 == HIGH)
  {
    digitalWrite(led_1, HIGH);
    digitalWrite(led_2, LOW);
      
  }
  ekse  if(button_2 == HIGH)
  {
    digitalWrite(led_1, LOW);
    digitalWrite(led_2, HIGH);
      
  }
  else  if(button_3 == HIGH)
  {
    digitalWrite(led_1, LOW);
    digitalWrite(led_2, LOW);
      
  }
}




