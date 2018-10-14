// Include the Servo library 
#include <Servo.h> 

#define red 4
#define green 5
#define blue 6
int servoPin = 3; 

// Create a servo object 
Servo myServo; 
void setup()
{ 
   // We need to attach the servo to the used pin number 
   myServo.attach(servoPin); 
   pinMode(red,OUTPUT);
   pinMode(green,OUTPUT);
   pinMode(blue,OUTPUT);
}

void loop()
{ 
   

myServo.write(10);
delay (5000);


digitalWrite(green, HIGH);
delay(1000);
digitalWrite(green, LOW);
delay(1000);
digitalWrite(blue, HIGH);
delay(1000);
digitalWrite(blue, LOW);
delay(1000);
digitalWrite(red, HIGH);
delay(1000);
digitalWrite(red, LOW);
delay(1000);
digitalWrite(green, HIGH);

myServo.write(100);
delay(5000);
digitalWrite(red, LOW);
 
}
