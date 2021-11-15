int buzz = 2;
int sw1 = 6;
int sw2 = 9;
int sw3 = 10;
int sw4 = 11;
int B2D;
int Do = 214;
int Re = 247;
int Mi = 330;
int Fa = 352;
int Sol = 396;
int La = 440;
int Si = 496;
int Doo = 528;

void setup() {
  Serial.begin(115200);
  pinMode(buzz,OUTPUT);
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(sw4,INPUT);
  
}

void loop() {
  int swt1 = digitalRead(sw1);
  int swt2 = digitalRead(sw2);
  int swt3 = digitalRead(sw3);
  int swt4 = digitalRead(sw4);

  B2D = ((swt1*8)+(swt2*4)+(swt3*2)+(swt4*1));

  
  Serial.print("sw1 = ");Serial.println(swt1);
  Serial.print("sw2 = ");Serial.println(swt2);
  Serial.print("sw3 = ");Serial.println(swt3);
  Serial.print("sw4 = ");Serial.println(swt4);
  Serial.print("B2D = ");Serial.println(B2D);
  

  if (B2D == 7) {
    tone(buzz,Do);
    Serial.println("Do");
    }
  else if (B2D == 3){
    tone(buzz,Re);
    Serial.println("Re");}
  else if (B2D == 11){
    tone(buzz,Mi);
    Serial.println("Mi");}
  else if (B2D == 9){
    tone(buzz,Fa);
    Serial.println("Fa");}
  else if (B2D == 13){
    tone(buzz,Sol);
    Serial.println("Sol");}
  else if (B2D == 12){
    tone(buzz,La);
    Serial.println("La");}
  else if (B2D == 14){
    tone(buzz,Si);
    Serial.println("Si");}
  else if (B2D == 6){
    tone(buzz,Doo);
    Serial.println("Doo");}
  else {
    noTone(buzz);}
  Serial.println("----------------------");
  delay(500);
  
  
  
  
 
}
