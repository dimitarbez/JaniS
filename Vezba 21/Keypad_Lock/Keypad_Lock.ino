#include <Keypad.h>
 
char* secretCode = "235711";
int position = 0;
 
const byte rows = 4;
const byte cols = 4 ;
char keys[rows][cols] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
 
byte rowPins[rows] = {2,3,4,5};
byte colPins[cols] = {6,7,8,9};
 
Keypad keypad = Keypad(makeKeymap(keys),
                       rowPins, colPins,
                       rows, cols);
 
int redPin = 10;
int greenPin = 11;
 
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  setLocked(true);
}
 
void loop()
{
  char key = keypad.getKey();
  if (key == '*' || key == '#') {
    position = 0;
    setLocked(true);
  }
 
  if (key == secretCode[position]) {
    position++;
  }
 
  if (position == 6) {
    setLocked(false);
  }
  delay(50);
}
 
void setLocked(int locked)
{
  if (locked) {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
  }
  else {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
  }
}
