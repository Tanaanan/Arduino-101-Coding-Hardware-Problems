  int num = 0;
  int Pin2 = 2; //Switch1
  int Pin4 = 4; //Switch2
void setup() {
  Serial.begin(115200);
  pinMode(Pin2,INPUT);
  pinMode(Pin4,INPUT);
}

void loop() {
 int Switch2 = digitalRead(Pin2);
 int Switch4 = digitalRead(Pin4);

 if (Switch2 ==1){
  if (Switch4 == 1){
  Serial.println(num++);
  delay(500);}
 else if (Switch4 == 0){
  Serial.println(num--);
  delay(500);}
  }
 else {
  delay(500);}
}
