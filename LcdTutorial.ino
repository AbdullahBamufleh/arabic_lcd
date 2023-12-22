#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // RS, E, D4, D5, D6,

byte c1[] = {
B00100,
B00000, 
B00111, 
B01000, 
B01000, 
B11111, 
B00000, 
B00000
};

byte c2[] = {
B00000,
B01000, 
B00000, 
B01100, 
B01010, 
B01001, 
B01000, 
B11000
};
byte c3[] = {
B00110, 
B00000, 
B11000, 
B01111, 
B01001, 
B01001, 
B01111, 
B00000
};
void setup() {
  lcd.begin(16,2);

  lcd.createChar(1,c1);
  lcd.setCursor(15,0); 
  lcd.write(1);

  lcd.createChar(2,c2);
  lcd.setCursor(14,0);
  lcd.write(2);

  lcd.createChar(3,c3); 
  lcd.setCursor(13,0) ;
  lcd.write(3);

}

void loop() {
  

}
