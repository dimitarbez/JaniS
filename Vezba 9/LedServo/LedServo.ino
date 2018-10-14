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

void loop(){ 
   
 myServo.write(45);
 digitalWrite(red,HIGH);
 delay(1000);
 
 myServo.write(90);
 digitalWrite(green,HIGH);  
 delay(1000); 

 myServo.write(180);
 digitalWrite(blue,HIGH); 
 delay(1000); 
}
