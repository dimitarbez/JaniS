#define flamePin A0 // flame sensor
#define buzzerPin 6 //Buzzer 
#define transistorB_1 7 //left ear led strip
#define transistorB_2 8 //right ear led strip



int val;// define numeric variables val
float sensor; //read analoog value

// here i set up the tones, you can change them @ void loop.


void setup()
{
  Serial.begin(9600);

 
  pinMode(flamePin, INPUT);
  pinMode(transistorB_1, OUTPUT);
  pinMode(transistorB_2, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);

  //Part of buzzer tones

  for (int i = 0; i < buzzerPin; i++)
  {

  }
}

void loop()
{
  // read the sensor  
  analogRead(flamePin);


  val = analogRead(flamePin);

  if (val <= 150) //when the flame sensor detects a signal

  {

    digitalWrite(transistorB_1, HIGH);
    digitalWrite(transistorB_2, HIGH);
    digitalWrite(buzzerPin, HIGH);
    delay(100);
  }

  else

  {
    digitalWrite(transistorB_1, LOW);
    digitalWrite(transistorB_2, LOW);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }

}

