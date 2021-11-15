int swPin = 2;
void setup() {
Serial.begin(115200);
pinMode(swPin, INPUT);
}
void loop() {
int state = digitalRead(swPin);
if (state == 0){
  Serial.println("Switch off!");}
else if (state == 1){
  Serial.println("Switch on!");}
delay(1000);
}
