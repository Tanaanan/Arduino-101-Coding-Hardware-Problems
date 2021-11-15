void setup () {

  Serial.begin(115200);
  
  int grade = 40;

  Serial.print("Grade = ");Serial.println(grade);
  
  if (grade <= 100 && grade >=80){
    Serial.println("Grade A!");
  }
  else if (grade < 80 && grade >= 70){
    Serial.println("Grade B!");
  }
  else if (grade < 70 && grade >= 60 ){
    Serial.println("Grade C!");
  }
  else if (grade < 60 && grade >= 50){
    Serial.println("Grade D!");
  }
  else{
    Serial.println("Grade E!");
  }
}
void loop (){
  }
