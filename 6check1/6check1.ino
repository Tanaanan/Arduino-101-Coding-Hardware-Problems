int x = 0;
int score = 0;

void setup() {
  Serial.begin(115200);

}

void loop() {
  
  if(Serial.available() > 0){
    x = Serial.read();
  
  switch(x){
    case 'A':
      Serial.println("Perfect");
      score += 20;
      Serial.print("Score = ");Serial.println(score);
      
      break;
    case 'B':
      Serial.println("Great");
      score += 15;
      Serial.print("Score = ");Serial.println(score);
      break;
    case 'C':
      Serial.println("Good");
      score += 10;
      Serial.print("Score = ");Serial.println(score);
      break;
    case 'D':
      Serial.println("fair");
      score += 5;
      Serial.print("Score = ");Serial.println(score);
      break;
    case 'E':
      Serial.println("Ok");
      score += 1;
      Serial.print("Score = ");Serial.println(score);
      break;
    default:
      Serial.println("No match cases");
      score += 0;
      Serial.print("Score = ");Serial.println(score);
    }
    delay(1000);
     }

}
