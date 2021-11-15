void setup (){
Serial.begin(115200);

  
}

void loop () { 
 for (int x=0; x<=20; x+=2){
  Serial.print(x); Serial.print(", ");
  if(x == 20){
    Serial.println();}
  }

}
