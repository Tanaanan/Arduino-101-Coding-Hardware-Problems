// Program 1
void setup()
{
Serial.begin(115200);
int x = 30;
switch(x) {
case 10:
Serial.println("x is 10");
 break;
case 20:
Serial.println("x is 20");
 break;
default:
Serial.println("no match cases");
}
}
void loop()
{
}
