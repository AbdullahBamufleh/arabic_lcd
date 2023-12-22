#include <LiquidCrystal.h> // import LCD library

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // RS, E, D4, D5, D6,

byte c1[] = { // حرف الغين غ
B00100,
B00000, 
B00111, 
B01000, 
B01000, 
B11111, 
B00000, 
B00000
};

byte c2[] = { // حرف الزين ز
B00000,
B01000, 
B00000, 
B01100, 
B01010, 
B01001, 
B01000, 
B11000
};
byte c3[] = { // حرف التاء ة
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
  lcd.begin(16,2); // setup the LCD boared with corrcet dimensions

  lcd.createChar(1,c1); // make a new character with index 1, and equal to c1
  lcd.setCursor(15,0);  // set the cursor where to start writing
  lcd.write(1); // display the character with index 1

  lcd.createChar(2,c2); // make a new character with index 2, and equal to c2
  lcd.setCursor(14,0); // set the cursor where to start writing
  lcd.write(2); // display the character with index 2

  lcd.createChar(3,c3); // make a new character with index 3, and equal to c3
  lcd.setCursor(13,0) ; // set the cursor where to start writing
  lcd.write(3); // display the character with index 3

}

void loop() {
  

}
