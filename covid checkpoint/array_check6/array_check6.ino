int led[] = {0,4,5,6,7};
void setup() {
  Serial.begin(115200);
}

void loop() {
  for(int i = 0; i<5; i++){
    pinMode(led[i], OUTPUT);
    digitalWrite(led[i],HIGH);
    delay(1000);}
  for(int i = 0; i<5; i++){
    digitalWrite(led[i],LOW);
    }

    delay(1000);

 
}
