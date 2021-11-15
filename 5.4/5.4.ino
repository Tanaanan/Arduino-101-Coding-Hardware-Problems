int B2D;
int Pin1 = 2;
int Pin2 = 4;
int Pin3 = 6;


void setup() {
  Serial.begin(115200);
  pinMode(Pin1,INPUT);
  pinMode(Pin2,INPUT);
  pinMode(Pin3,INPUT);

}

void loop() {
  int Switch1 = digitalRead(Pin1);
  int Switch2 = digitalRead(Pin2);
  int Switch3 = digitalRead(Pin3);
  
  B2D = (Switch1*(2*2))+(Switch2*(2*1))+(Switch3*(1));
  Serial.println(B2D);
  delay(500);

}
