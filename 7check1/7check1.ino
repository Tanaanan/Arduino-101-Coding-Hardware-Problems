String str = "";
int count = 0;
void setup() {
  Serial.begin(115200);

}

void loop() {
  count++;
  if (count % 5 == 0){
    str =  str + " " + String(count);
    Serial.println(str); }
  delay(500);
  

}
