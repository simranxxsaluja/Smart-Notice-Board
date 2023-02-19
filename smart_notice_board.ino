#include <LiquidCrystal.h>

const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7, button = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int count=0;

void setup() {
  pinMode(button, INPUT);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Press the button");
  lcd.setCursor(0, 1);
  lcd.print("to select msg");  
 
}
void loop() {
  while(digitalRead(button) == LOW){
    lcd.clear();
    count++;
    delay(1000);
   
  if (count == 1) {
    lcd.setCursor(0, 0);
    lcd.print("We are OPEN");
  }
 
    if (count == 2) {
    lcd.setCursor(0, 0);
    lcd.print("We are CLOSED");
    lcd.setCursor(0, 1);
    lcd.print("OPENS at 8 AM");
  }
   
    if (count == 3) {
    lcd.setCursor(0, 0);
    lcd.print("10% OFF");
    lcd.setCursor(0, 1);
    lcd.print("Today only");

  }
}
}
