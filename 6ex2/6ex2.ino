// Program 2
int acc = 0;
int oddCount = 0;
int evenCount = 0;
int r;
void setup()
{
Serial.begin(115200);
}
void loop()
{
r = acc % 2;
switch(r) {
case 0:
Serial.println("Even Number");
evenCount++;
break;
case 1:
Serial.println("Odd Number");
oddCount++;
break;
}
Serial.print("Current Count: ");
Serial.print("Even NUM = ");
Serial.print(evenCount);
Serial.print(" Odd NUM = ");
Serial.println(oddCount);
acc++;
Serial.print("acc = ");Serial.println(acc);//add
delay(2000);
}
