// Program 7
void setup ()
{
Serial.begin(115200);
String a = "35";
String b = "22.25";
int num = b.toInt();
float val1 = b.toFloat();
double val2 = b.toDouble();
Serial.println(num);
Serial.println(val1);
Serial.println(val2);
}
void loop ()
{
}
