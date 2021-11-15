int pin2 = 9;
int sw1 = 3;
int switch1;
void setup() {
  Serial.begin(115200);
  pinMode(sw1,INPUT);
  pinMode(pin2,OUTPUT);

}

void loop() {
  switch1 = digitalRead(sw1);
  if (switch1 == 0){
    digitalWrite(pin2,HIGH);}
  else {
    digitalWrite(pin2,LOW);}
  

}
