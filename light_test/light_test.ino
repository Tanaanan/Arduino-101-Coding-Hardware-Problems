
int aled = 2;
int bled = 4;
int cled = 7;
int dled = 8;
int ds = 20;
void setup () {
Serial.begin(115200);
pinMode(aled, OUTPUT);
pinMode(bled, OUTPUT);
pinMode(cled, OUTPUT);
}
void loop () {
digitalWrite(aled, HIGH);
delay(4);
digitalWrite(aled, LOW);
delay(4);
digitalWrite(bled, HIGH);
delay(4);
digitalWrite(bled, LOW);
delay(4);
digitalWrite(cled, HIGH);
delay(4);
digitalWrite(cled, LOW);
delay(4);
digitalWrite(dled, HIGH);
delay(4);
digitalWrite(dled, LOW);
delay(4);

}
