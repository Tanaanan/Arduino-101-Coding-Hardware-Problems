#include<Servo.h>
Servo myservo;
void setup() {
  myservo.attach(8);

}

void loop() {
  myservo.write(0);
  delay(1000);
  myservo.write(90);
  delay(1000);
  myservo.write(180);
  delay(1000);


}
