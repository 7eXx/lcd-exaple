#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.clear();
  lcd.autoscroll();
}

void loop() {
  // put your main code here, to run repeatedly:
  // first line
  lcd.setCursor(0,0);
  lcd.print("Ciao Licia!");
  // second line
  lcd.setCursor(0,1);
  lcd.print("Ti voglio tanto bene <3");

  delay(1000);
}
