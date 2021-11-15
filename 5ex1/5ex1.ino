int sw2 = 2;
void setup() {
  Serial.begin(115200);
  pinMode(sw2,INPUT);
}

void loop() {
  int state = digitalRead(sw2);
  Serial.println(state);
  delay(1000);

}
