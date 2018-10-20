int Led=13; 
int IR=3;  
int val;
void setup()
{
pinMode(Led,OUTPUT); 
pinMode(IR,INPUT); 
}
void loop()
{
val=digitalRead(IR); 
if(val==HIGH) 
{
digitalWrite(Led,HIGH);
}
else
{
digitalWrite(Led,LOW);
}
}
