#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
int P_score;
int ran;
int Pin1 = 8;
int Pin2 = 9;
int Pin3 = 10;
int score_player = 0;
int score_bot = 0;
int Input;
int B2D;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(115200);
  lcd.begin(16,2);
  pinMode(Pin1,INPUT);
  pinMode(Pin2,INPUT);
  pinMode(Pin3,INPUT);
  lcd.setCursor(0,1);
  lcd.print("Ohayokosaimasu! --->");
}

void loop() {
  lcd.setCursor(0,0);
  int Switch1 = digitalRead(Pin1);
  int Switch2 = digitalRead(Pin2);
  int Switch3 = digitalRead(Pin3);

  B2D = (Switch1*4)+(Switch2*2)+(Switch3*1);
  
  if (Switch1 == 0 || Switch2 == 0 || Switch3 == 0){
    if (B2D == 3){
      lcd.print("Player  =  ROCK");
      Input = 1;}
    else if (B2D == 5){
      lcd.print("Player =Scrissor");
      Input = 2;}
    else if (B2D == 6){
      lcd.print("Player = Paper");
      Input = 3;}

    
    delay(1000);
    lcd.clear();
    lcd.clear();  
    
    
    ran = random(1,4);
    
    if (ran == 1){
      lcd.print("Bot = ROCK");}
    else if (ran == 2){
      lcd.print("Bot = Scrissor");}
    else if (ran == 3){
      lcd.print("Bot = Paper");}
    
    delay(1000);
    lcd.clear();
    
     if (B2D == 7){
      lcd.print("No score!");
      Serial.println("No score!");}
    else if (Input == 1 || Input == 2|| Input == 3){
          if (Input == ran){//Match game
      lcd.print("Tie!");
      Serial.println("Tie!");
      }
    else if ((Input + ran) == 3){ //Rock, Scrissor
      if (Input == 1){
        lcd.print("Player win!");
        Serial.println("Player win!");
        score_player++;
        }
      else {
        lcd.print("Bot win!");
        Serial.println("Bot win!");
        score_bot++;
        } }
    else if ((Input + ran) == 4){//Rock, Paper
      if (Input == 3){
        lcd.print("Player win!");
        Serial.println("Player win!");
        score_player++;
        }
      else {
        lcd.print("Bot win!");
        Serial.println("Bot win!");
        score_bot++;
        } }
    else if ((Input + ran) == 5){//Scrissor, Paper
      if (Input == 2) {
        lcd.print("Player win!");
        Serial.println("Player win!");
        score_player++;
        }
      else {
        lcd.print("Bot win!");
        Serial.println("Bot win!");
        score_bot++;
        }}
      }
    delay(1000);
    lcd.clear();
    
    }
    lcd.setCursor(0,0);
    lcd.print("User: ");lcd.print(score_player);lcd.print(" Bot: ");lcd.print(score_bot);

    
}
