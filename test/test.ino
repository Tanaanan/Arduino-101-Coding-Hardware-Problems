// Program 12
int data[] = {1,2,3,};
void setup ()
{
Serial.begin(115200);
Serial.println(data[0]);
Serial.println(data[1]);
Serial.println(data[2]);
data[0] = 10;
data[1] = 20;
data[2] = 30;
Serial.println(data[0]);
Serial.println(data[1]);
Serial.println(data[2]);
}
void loop () { }
