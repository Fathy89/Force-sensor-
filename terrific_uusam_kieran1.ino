#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int reading  ;
  
void setup()
{
  pinMode(A0,INPUT) ; 
  lcd.init(); 
lcd.backlight();

}

void loop()
{
  reading = analogRead(A0);
 lcd.home(); 
  lcd.print("reading =" ); 
  lcd.print(reading); 
}