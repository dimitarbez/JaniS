#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>
#include <DHT_U.h>                       //include the DHT library             
#define DHTPin A8                        //define DHT pin
#define DHTTYPE DHT11

//initialize lcd pins

DHT dht(DHTPin, DHTTYPE);
#define I2C_ADDR 0x3F
#define BACKLIGHT_PIN 3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7
#define I2C_ADDR 0x3F


LiquidCrystal_I2C  lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);


float temp;
float humi;
void setup()
{
  dht.begin();  
  lcd . begin (16,2);                      //initializes the LCD and specifies the dimensions
  lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
  lcd.setBacklight(HIGH);
}
void loop() {
  temp = dht.readTemperature();

  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(temp);
  lcd.print(" C");
  lcd.setCursor(0,1);
  lcd.print("Humi: ");
  lcd.print(humi);
  lcd.print(" %");
  delay(2000);
}
