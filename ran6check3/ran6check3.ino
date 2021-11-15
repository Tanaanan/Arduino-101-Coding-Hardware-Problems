int bot;
int count = 0;
int Inp;
void setup() {
// put your setup code here, to run once:
Serial.begin(115200);
randomSeed(analogRead(0));
bot = random(10);
}

void loop() {

// put your main code here, to run repeatedly:
if (Serial.available() > 0){
Inp = Serial.read();
Inp = Inp - '0';
if(Inp == bot){
Serial.println("YOU_WIN");
count = count*0;
}
else if (Inp > bot){
Serial.println("TOO_HIGH");
count = count + 1;
}
else if (Inp < bot){
Serial.println("TOO_LOW");\
count = count + 1;
}
if(count == 10){
  Serial.println("You failed!");
}


}

}
