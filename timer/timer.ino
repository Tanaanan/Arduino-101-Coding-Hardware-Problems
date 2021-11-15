void setup() {
  Serial.begin(115200);

}

void loop() {
  for (int i = 0; i<3 ; i++){
    
    Serial.print(i);
    Serial.print(" ");
    delay(1000);
    }

}
