#define Grove_Water_Sensor 8 // Attach Water sensor to Arduino Digital Pin 8
#define LED 9 // Attach an LED to Digital Pin 9 (or use onboard LED)

void setup() {
   pinMode(Grove_Water_Sensor, INPUT); // The Water Sensor is an Input
   pinMode(LED, OUTPUT);// The LED is an Output
  
}

void loop() {
   /* The water sensor will switch LOW when water is detected.
   Get the Arduino to illuminate the LED and activate the buzzer
   when water is detected, and switch both off when no water is present */
   if( digitalRead(Grove_Water_Sensor) == LOW) {
      digitalWrite(LED, HIGH );
   }else {
      digitalWrite(LED ,LOW);
   }
}
