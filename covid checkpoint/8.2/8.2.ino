#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int input ;
int sum ;
int ze;
void setup() {
lcd.begin(16,2);
Serial.begin(115200);

}
void loop() {

if (Serial.available()>0){
    input = Serial.read();
    sum = input - 48;
    Serial.println(sum);
    }
  ze = 0;
  while (ze <= sum ) {
    Serial.println(ze);
    lcd.print(ze);
    ze++;
    delay(500);
    lcd.clear();
    }  
}
