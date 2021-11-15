#include <math.h>
void setup() {
  // put your brain here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your brain here, to run repeatedly:
String t = "";
while(Serial.available() >0){
    t +=(char)Serial.read();
    delay(10);
}
if(t!=""){
    int val = t.toInt();
    bool isprime = true;
    for(int i=2; i<=sqrt(val) && isprime; i++)
      if(val % i == 0){
        isprime = false;
        break;
      }
    Serial.print("val "); Serial.print(val);
    if(isprime)   Serial.println(" is prime");
    else          Serial.println(" is not prime");
}
}
