#include <LiquidCrystal.h>
const int rs = 13, en = 12, d4 = 8, d5 = 9, d6 = 10, d7 = 11;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
#include<Servo.h>
Servo myservo;
int Pin1 = 4;
int Pin2 = 3;
int const trigPin = 7;
int const echoPin = 6;
int count = 0;
int timer;
int buzz = 2;
void setup()
{Serial.begin(115200);
myservo.attach(5);
lcd.begin(16,2);
pinMode(Pin1,INPUT);
pinMode(Pin2,INPUT);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT); 
pinMode(buzz,OUTPUT);
delay(1000);
lcd.setCursor(0,0);
lcd.print("Ohayo! >_<         ");
lcd.setCursor(0,1);
lcd.print("Alcohol fill -->      ");
  
}
void loop(){
    
int Sw1 = digitalRead(Pin1);
int Sw2 = digitalRead(Pin2);
//Serial.println(Sw1);
//Serial.println(Sw2);


if(Sw1 == 0 && Sw2 == 1){
  count = 2;
  tone(buzz,600);
  delay(250);
  noTone(buzz);} //Timer Off!
else if(Sw1 == 1 && Sw2 == 0){
  count = 1;
  tone(buzz,800);
  delay(250);
  noTone(buzz);} //Timer On!

if(count == 1){
  timer = 1;
  lcd.setCursor(0,0);
  lcd.print("Washing timer?");
  lcd.setCursor(0,1);
  lcd.print("Timer On! [Sw2]               ");} //Timer On!
else if(count == 2){
  timer = 0;
  lcd.setCursor(0,0);
  lcd.print("Washing timer?");
  lcd.setCursor(0,1);
  lcd.print("Timer Off! [Sw1]               ");} //Timer Off1

Serial.print("Count = ");Serial.println(count);
Serial.print("Timer = ");Serial.println(timer);




  
int duration, distance;
digitalWrite(trigPin, HIGH);
delay(1);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
      Serial.print("Distance = ");Serial.println(distance);
      
if (distance <= 5 && distance >= 0) {
    lcd.setCursor(0,0);
    lcd.print("Status :              ");
    lcd.setCursor(0,1);
    lcd.print("Processing..          ");
  
    Serial.println("Found object!");
    
    myservo.writeMicroseconds(500); // ค่า PWM ที่สั่งให้ Servo หมุนตามเข็มนาฬิกาด้วยความเร็วสูงสุด
    delay(1600); // หน่วงเวลา 3000ms servo จะหมุนไปเรื่อยๆจนกว่าจะครบเวลาที่ delay ไว้
    myservo.writeMicroseconds(1500); // สั่งให้ Servo หยุด
    delay(1000); // หน่วงเวลา 3000ms servo จะหยุดหมุนจนกว่าจะครบเวลาที่ delay ไว้
    myservo.writeMicroseconds(2500); // ค่า PWM ที่สั่งให้ Servo หมุนทวนเข็มนาฬิกาด้วยความเร็วสูงสุด
    delay(1600); // หน่วงเวลา 3000ms servo จะหมุนไปเรื่อยๆจนกว่าจะครบเวลาที่ delay ไว้
    myservo.writeMicroseconds(1500); // สั่งให้ Servo หยุด
    delay(1000); // หน่วงเวลา 3000ms servo จะหยุดหมุนจนกว่าจะครบเวลาที่ delay ไว้
    if (timer == 1){
    myservo.writeMicroseconds(500); // ค่า PWM ที่สั่งให้ Servo หมุนตามเข็มนาฬิกาด้วยความเร็วสูงสุด
    delay(1600); // หน่วงเวลา 3000ms servo จะหมุนไปเรื่อยๆจนกว่าจะครบเวลาที่ delay ไว้
    myservo.writeMicroseconds(1500); // สั่งให้ Servo หยุด
    delay(1000); // หน่วงเวลา 3000ms servo จะหยุดหมุนจนกว่าจะครบเวลาที่ delay ไว้
    myservo.writeMicroseconds(2500); // ค่า PWM ที่สั่งให้ Servo หมุนทวนเข็มนาฬิกาด้วยความเร็วสูงสุด
    delay(1600); // หน่วงเวลา 3000ms servo จะหมุนไปเรื่อยๆจนกว่าจะครบเวลาที่ delay ไว้
    myservo.writeMicroseconds(1500); // สั่งให้ Servo หยุด
            for (int i = 20; i>0 ; i--){
              lcd.setCursor(0,0);
              lcd.print("Wash hand... 20sec      ");
              lcd.setCursor(0,1);
              lcd.print("Time left: ");
              lcd.print(i);
              lcd.print(" ");
              delay(1000);}
        }

     lcd.setCursor(0,0);
     lcd.print("Status :        ");
     lcd.setCursor(0,1);
     lcd.print("Done!             ");
     delay(500);
}
else {
//no object
Serial.println("No object found!");
}

delay(60);
}
