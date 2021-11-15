
int sw2 = 2;
int sw3 = 3;
int sw4 = 4;
int sw5 = 5;
int sw6 = 6;
int sw7 = 7;
int sw8 = 8;
int sw9 = 9;

int B2D_1;
int B2D_2;
int sw13 = 13;
int led10 = 10;

void setup() {
  Serial.begin(115200);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(sw4,INPUT);
  pinMode(sw5,INPUT);
  pinMode(sw6,INPUT);
  pinMode(sw7,INPUT);
  pinMode(sw8,INPUT);
  pinMode(sw9,INPUT);
  pinMode(sw13,INPUT);
  pinMode(led10,OUTPUT);
  

}

void loop() {
  int Switch1_1 = digitalRead(sw2);
  int Switch2_1 = digitalRead(sw3);
  int Switch3_1 = digitalRead(sw4);
  int Switch4_1 = digitalRead(sw5);

  int Switch1_2 = digitalRead(sw6);
  int Switch2_2 = digitalRead(sw7);
  int Switch3_2 = digitalRead(sw8);
  int Switch4_2 = digitalRead(sw9);

  int Switch13 = digitalRead(sw13);
  
  B2D_1 = ((Switch1_1 *8)+(Switch2_1 * 4)+(Switch3_1 * 2)+(Switch4_1 * 1));
  B2D_2 = ((Switch1_2 *8)+(Switch2_2 * 4)+(Switch3_2 * 2)+(Switch4_2 * 1));
  

  
  Serial.print("sw 1_1 = "); Serial.println(Switch1_1);
  Serial.print("sw 2_1 = "); Serial.println(Switch2_1);
  Serial.print("sw 3_1 = "); Serial.println(Switch3_1);
  Serial.print("sw 4_1 = "); Serial.println(Switch4_1);
  Serial.print("B2D = "); Serial.println(B2D_1);
  Serial.println("----------------------");
  


  Serial.print("sw 1_2 = "); Serial.println(Switch1_2);
  Serial.print("sw 2_2 = "); Serial.println(Switch2_2);
  Serial.print("sw 3_2 = "); Serial.println(Switch3_2);
  Serial.print("sw 4_2 = "); Serial.println(Switch4_2);
  Serial.print("B2D = "); Serial.println(B2D_2);
  Serial.println("----------------------");
  

  if (Switch13 == 1){
    int plus = B2D_1 + B2D_2;
    Serial.print("plus "); Serial.println(plus);
    if (plus % 2 == 0){
      digitalWrite(led10,HIGH);
      Serial.println("Even number!");}
    else {
      digitalWrite(led10,LOW);
      Serial.println("Odd number!");}
  }
  else if (Switch13 == 0){
    int minus = B2D_1 - B2D_2;
    Serial.print("minus "); Serial.println(minus);
    if (minus % 2 == 0){
      digitalWrite(led10,HIGH);
      Serial.println("Even number!");}
    else {
      digitalWrite(led10,LOW);
      Serial.println("Odd number!");}}
   Serial.println("----------------------");
  delay(2500);
}
