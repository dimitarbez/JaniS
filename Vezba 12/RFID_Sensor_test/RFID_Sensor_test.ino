
//RFID
#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>
 
#define SS_PIN 10
#define RST_PIN 9
#define LED_G 4 //define green LED pin
#define LED_R 5 //define red LED
#define BUZZER 2 //buzzer pin
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.5555555555550
Servo myServo; //define servo name
 
void setup() 
{
  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
  myServo.attach(3); //se002rvo pin
  
  myServo.write(0); //servo start position

   pinMode(LED_G, OUTPUT);
  pinMode(LED_R, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  noTone(BUZZER);
  Serial.println("Put your card to the reader...");
  Serial.println();

}
void loop() 
{
 
   
  // Look for new cards
  if (  mfrc522.PICC_IsNewCardPresent()) 
  {
    Serial.println("Authorized access");
    Serial.println();
    delay(500);
    digitalWrite(LED_G, HIGH);
    tone(BUZZER, 500);
    delay(300);
    noTone(BUZZER);
    myServo.write(180);
    delay(5000);
    myServo.write(0);
    digitalWrite(LED_G, LOW);
   
  }


  
 
 else   {
    Serial.println(" Access denied");
    digitalWrite(LED_R, HIGH);
    
    delay(1000);
    digitalWrite(LED_R, LOW);
    noTone(BUZZER);
  }
} 
