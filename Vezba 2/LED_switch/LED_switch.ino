#define LED 4
#define sw 3
void setup() {
  pinMode(LED, OUTPUT);
  pinMode (sw, INPUT);
}

void loop() {
  if (sw == HIGH)
  {
	  digitalWrite(LED, HIGH);
	  
  }
 
}
