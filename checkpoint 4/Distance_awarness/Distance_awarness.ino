void setup () {
  
Serial.begin(115200);

int LED_1 = 2;
int LED_2 = 3;
int LED_3 = 4;
int distance = 12;//Distance input

pinMode(LED_1, OUTPUT);
pinMode(LED_2, OUTPUT);
pinMode(LED_3, OUTPUT);


//Distance output
Serial.println("******************************************************************");
Serial.print("Distance = ");Serial.print(distance);Serial.println(" cm");
Serial.println("******************************************************************");

if (distance < 0){
  Serial.println("Error!, distance can't be negative.");
  Serial.println("******************************************************************");
  }
else if (distance > 0){
  if (distance >= 20){
  digitalWrite(LED_1,LOW);
  digitalWrite(LED_2,LOW);
  digitalWrite(LED_3,LOW);
  Serial.println("Safe");
  Serial.println("******************************************************************");

  }
else if (distance < 20 && distance >= 15){
  digitalWrite(LED_1,HIGH);
  digitalWrite(LED_2,LOW);
  digitalWrite(LED_3,LOW);
  Serial.println("Beware!");
  Serial.println("******************************************************************");

  }
else if (distance < 15 && distance >= 10){
  digitalWrite(LED_1,HIGH);
  digitalWrite(LED_2,HIGH);
  digitalWrite(LED_3,LOW);
  Serial.println("Beware!");
  Serial.println("******************************************************************");

  }
else if (distance <= 10){
  digitalWrite(LED_1,HIGH);
  digitalWrite(LED_2,HIGH);
  digitalWrite(LED_3,HIGH);
  Serial.println("Danger!");
  Serial.println("******************************************************************");
}}
}
void loop () {

}
