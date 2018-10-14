#include <Keypad.h>

//For this example we need Arduino Mega

int speakerPin = 12; // speaker connected to digital pin 12
const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns

#define led_1  22
#define led_2  23
#define led_3  24
#define led_4  25
#define led_5  26
#define led_6  27
#define led_7  28
#define led_8  29
#define led_9  30
#define led_10 31
#define led_11 32
#define led_12 33
#define led_13 34
#define led_14 35
#define led_15 36
#define led_16 37

char keys[ROWS][COLS] = {
{'a','b','c','d'},
{'e','f','g','h'},
{'i','j','k','l'},
{'m','n','o','p'}
};
byte rowPins[ROWS] = {2, 3, 4, 5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6, 7, 8, 9}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup()
{

Serial.begin (9600);

pinMode(speakerPin, OUTPUT); // sets the speakerPin to be an output

pinMode(led_1,OUTPUT);
pinMode(led_2,OUTPUT);
pinMode(led_3,OUTPUT);
pinMode(led_4,OUTPUT);
pinMode(led_5,OUTPUT);
pinMode(led_6,OUTPUT);
pinMode(led_7,OUTPUT);
pinMode(led_8,OUTPUT);
pinMode(led_9,OUTPUT);
pinMode(led_10,OUTPUT);
pinMode(led_11,OUTPUT);
pinMode(led_12,OUTPUT);
pinMode(led_13,OUTPUT);
pinMode(led_14,OUTPUT);
pinMode(led_15,OUTPUT);
pinMode(led_16,OUTPUT);

}

void loop()
{
char key = keypad.getKey();

if (key != NO_KEY){
Serial.println(key);

if (key=='a')
{
  beep(speakerPin,510,100);
  digitalWrite(led_1,HIGH); 
  digitalWrite(led_16,LOW);
 
}

if (key=='b')
{ 
  beep(speakerPin,380,100);
  digitalWrite(led_1,LOW);
 digitalWrite(led_2,HIGH);
}

if (key=='c')
{
  beep(speakerPin,320,100);
   digitalWrite(led_2,LOW);
 digitalWrite(led_3,HIGH);
}

if (key=='d')
{ 
  beep(speakerPin,440,100);
   digitalWrite(led_3,LOW);
 digitalWrite(led_4,HIGH);
}

if (key=='e')
{ 
  beep(speakerPin,480,100);
   digitalWrite(led_4,LOW);
 digitalWrite(led_5,HIGH);
}

if (key=='f')
{
beep(speakerPin,450,100);
 digitalWrite(led_5,LOW);
 digitalWrite(led_6,HIGH);
}


if (key=='g')
{ 
  beep(speakerPin,430,100);
 digitalWrite(led_6,LOW);
 digitalWrite(led_7,HIGH);
}

if (key=='h')
{
  beep(speakerPin,380,100);
 digitalWrite(led_7,LOW);
 digitalWrite(led_8,HIGH);
}


if (key=='i')
{ 
  beep(speakerPin,660,100);
 digitalWrite(led_8,LOW);
 digitalWrite(led_9,HIGH);
}

if (key=='j')
{
  beep(speakerPin,760,100);
 digitalWrite(led_9,LOW);
 digitalWrite(led_10,HIGH);
}

if (key=='k')
{ 
  beep(speakerPin,860,100);
 digitalWrite(led_10,LOW);
 digitalWrite(led_11,HIGH);
}

if (key=='l')
{ 
  beep(speakerPin,700,100);
 digitalWrite(led_11,LOW);
 digitalWrite(led_12,HIGH);
}

if (key=='m')
{
  beep(speakerPin,760,100);
 digitalWrite(led_12,LOW);
 digitalWrite(led_13,HIGH);
}

if (key=='n')
{
  beep(speakerPin,660,100);
 digitalWrite(led_13,LOW);
 digitalWrite(led_14,HIGH);
}

if (key=='o')
{ 
beep(speakerPin,520,100);
 digitalWrite(led_14,LOW);
 digitalWrite(led_15,HIGH);
}

if (key=='p')
{
  beep(speakerPin,580,100);
 digitalWrite(led_15,LOW);
 digitalWrite(led_16,HIGH);
}
  }
}

void beep (unsigned char speakerPin, int frequencyInHertz, long timeInMilliseconds){ // the sound producing function
int x;
long delayAmount = (long)(1000000/frequencyInHertz);
long loopTime = (long)((timeInMilliseconds*1000)/(delayAmount*2));
for (x=0;x<loopTime;x++)
{
digitalWrite(speakerPin,HIGH);
delayMicroseconds(delayAmount);
digitalWrite(speakerPin,LOW);
delayMicroseconds(delayAmount);
}
}
