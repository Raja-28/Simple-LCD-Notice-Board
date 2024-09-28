#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {

  lcd.begin();
  lcd.backlight();
  
  
  lcd.setCursor(0, 0);
  lcd.print("Welcome to the");
  
  lcd.setCursor(0, 1);
  lcd.print("Notice Board");
  
  delay(3000);  
  lcd.clear();

  
  lcd.setCursor(0, 0);
  lcd.print("Stay Informed!");
  
  lcd.setCursor(0, 1);
  lcd.print("Check Updates");
}

void loop() {
}
