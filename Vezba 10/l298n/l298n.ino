#define leftMotor 10
#define rightMotor 11
#define leftDirection 12
#define rightDirection 13
#define rotary A0
#define directionSwitchPin 4
#define onOffSwitchStateSwitchPin 5

int motorSpeed;

void setup() {
  pinMode(leftMotor, OUTPUT);
  pinMode(rightMotor, OUTPUT);
  pinMode(leftDirection, OUTPUT);
  pinMode(rightDirection, OUTPUT);
}

void loop() {
  motorSpeed = analogRead(rotary)/4;
  
    while (onOffSwitchStateSwitchPin == HIGH)
    {
      
      analogWrite(leftMotor, motorSpeed);
      analogWrite(rightMotor, motorSpeed);

      if(directionSwitchPin == HIGH)
      {
        digitalWrite(leftMotor, HIGH);
        digitalWrite(rightMotor, HIGH);
      }
      else  
      {
        digitalWrite(leftMotor, LOW);
        digitalWrite(rightMotor, LOW);
      }
      
      
    }

}
