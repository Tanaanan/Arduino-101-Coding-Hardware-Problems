int Pin2 = 2;
int Pin4 = 4;
int Pin6 = 6;
int Pin8 = 8;

int sw10 = 10;
int sw12 = 12;
int n = 0;
void setup(){
  Serial.begin(115200);
  pinMode(Pin2,OUTPUT);
  pinMode(Pin4,OUTPUT);
  pinMode(Pin6,OUTPUT);
  pinMode(Pin8,OUTPUT);
  pinMode(sw10,INPUT);
  pinMode(sw12,INPUT);

  
  }
void loop () {
   //n = n + 1;
  int count = n%16;
  int switch10 = digitalRead(sw10);
  int switch12 = digitalRead(sw12);

  if (switch10 == 1){
    if (switch12 == 1){
      n++;
      Serial.println(count);
      delay(1000);}
    else if (switch12 == 0){
      n--;
      Serial.println(count);
      delay(1000);}
  else {
    }
    }


  if (count == 1||count == 2||count == 3||count == 5||count == 6||count == 7||count == 10||count == 14){
    digitalWrite(Pin2,HIGH);
  }
  if (count == 2||count == 3||count == 4||count == 6||count == 7||count == 11||count == 12||count == 13){
    digitalWrite(Pin4,HIGH);
  }
  if (count == 4||count == 5||count == 6||count == 7||count == 8||count == 9||count == 10||count == 11){
    digitalWrite(Pin6,HIGH);
  }
  if (count == 3||count == 4||count == 5||count == 7||count == 8||count == 13||count == 14||count == 15){
    digitalWrite(Pin8,HIGH);
  }
  delay(1000);
  digitalWrite(Pin2,LOW);
  digitalWrite(Pin4,LOW);
  digitalWrite(Pin6,LOW);
  digitalWrite(Pin8,LOW);
  }
