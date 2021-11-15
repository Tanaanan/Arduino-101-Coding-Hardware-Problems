//Program 4
int incomingByte = 0;
void setup() {
Serial.begin(115200);
}
void loop() {
if (Serial.available() > 0) {
incomingByte = Serial.read();
Serial.print("Received: ");
Serial.print("integer value: ");
Serial.print(incomingByte);
Serial.print(" char: ");
Serial.println((char)incomingByte);
}
}
