void setup() {
Serial.begin(115200); 
  for (int x=0; x<10; x++) {
    for (int y=0; y<x+1; y++)
      Serial.print("* ");
    Serial.println();
  }
}

void loop(){
  }
