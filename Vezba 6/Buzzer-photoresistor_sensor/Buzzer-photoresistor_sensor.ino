int lightPin = 0;
int led = 11;
long previousMillis = 0;
long interval = 100;
int buzzer=8;
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(lightPin, OUTPUT);
  pinMode(led, OUTPUT);
  // open the serial port at 9600 bps:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // using millis() instead of delay
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis > interval) {
    
    
    // save the last time you checked the sensor  
    previousMillis = currentMillis; 
    // read value from sensor
    int reading  = analogRead(lightPin);
    int ledvalue = reading / 2.67;
  
    //log values to Serial Monitor
    Serial.println("Light value / LED value");
    Serial.print(reading);
    Serial.print(" / ");
    Serial.println(ledvalue);  
    if (led==HIGH,buzzer, HIGH);

    
    //set the brigthness of LED
    analogWrite(led, ledvalue);   
  }            
}
