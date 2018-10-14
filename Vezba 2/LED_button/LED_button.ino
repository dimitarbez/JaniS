#define LED 4
#define sw1 3
#define sw2 2
#define sw3 5
void setup() {
  pinMode(LED, OUTPUT);
  pinMode (sw1, INPUT);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
}

void loop() {
  if (sw1 == HIGH)
  {
	  digitalWrite(LED, LOW);
	  
  }
  else
  {
	  digitalWrite(LED, HIGH);
  }
  
  if (sw2 == HIGH)
  {
	  digitalWrite(LED, LOW);
	  
  }
  else
  {
	  digitalWrite(LED, HIGH);
  }
  
  if (sw3 == HIGH)
  {
	  digitalWrite(LED, LOW);
	  
  }
  else
  {
	  digitalWrite(LED, HIGH);
  }
}
