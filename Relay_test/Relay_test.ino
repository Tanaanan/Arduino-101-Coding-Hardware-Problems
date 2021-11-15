int Relay1 = 8; // กำหนดขาใช้งาน
void setup()
{
pinMode(Relay1, OUTPUT); // กำหนดขาทำหน้าที่ให้ขา 2 เป็น OUTPUT
digitalWrite(Relay1, HIGH);
}
void loop()
{
digitalWrite(Relay1, LOW); // ส่งให้ไฟติด
delay(1000); // ดีเลย์ 1000ms
digitalWrite(Relay1, HIGH); // ส่งให้ไฟดับ
delay(1000); // ดีเลย์ 1000ms
}
