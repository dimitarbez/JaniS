#include <LiquidCrystal.h>
#define BACKLIGHT_PIN     13
LiquidCrystal lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3);  // Set the LCD I2C address
void setup()
{
  pinMode ( BACKLIGHT_PIN, OUTPUT );
  digitalWrite ( BACKLIGHT_PIN, HIGH );
  lcd.begin(16,2);              
  lcd.home ();                 
  lcd.print("Start game ");  
  lcd.setCursor ( 0,1 );     
  delay ( 10 );
}
void loop()
{
   lcd.home ();
   delay (1);
}
