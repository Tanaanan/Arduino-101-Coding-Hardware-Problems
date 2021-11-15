float MONEY = 1000 ;
float PRICE = 652.25 ;
float BACK = (MONEY - PRICE);
int GET = BACK;
void setup()
{
    Serial.begin(115200);
  
  // 1000 baht
    int N1000 = GET%1000;
    int k1000 = GET/1000;
    Serial.print("money 1000 baht ");
    Serial.print(k1000);
    Serial.println("money");
  
  // 500 baht
  int N500 = N1000%500;
  int B500 = N1000/500;
  Serial.print("money 500 baht ");
    Serial.print(B500);
    Serial.println("money");

  // 100 baht
    int N100 = N500%100;
    int k100 = N500/100;
    Serial.print("money 100 baht ");
    Serial.print(k100);
    Serial.println("money");
  
  // 50 baht
    int N50 = N100%50;
    int B50 = N100/50;
    Serial.print("money 50 baht ");
    Serial.print(B50);
    Serial.println("money");

  // 20 baht 
    int N20 = N50%20;
    int B20 = N50/20;
    Serial.print("money 20 baht ");
    Serial.print(B20);
    Serial.println("money");

  // 10 baht
    int N10 = N20%10;
    int k10 = N20/10;
    Serial.print("coin 10 baht ");
    Serial.print(k10);
    Serial.println("coin");

  // 5 baht
    int N5 = N10%5;
    int B5 = N10/5;
    Serial.print("coin 5 baht ");
    Serial.print(B5);
    Serial.println("coin");
  
  // 2 baht
    int N2 = N5%2;
    int B2 = N5/2;
    Serial.print("coin 2 baht ");
    Serial.print(B2);
    Serial.println("coin");
  
  // 1 baht
    int N1 = N2%1;
    int k1 = N2/1;
    Serial.print("coin 1 baht ");
    Serial.print(k1);
    Serial.println("coin");
  
 float get = BACK - GET ;
   
 //0.75 
   
  if (get == 0.75){
    Serial.println("coin 0.5 baht 1 coin");
      Serial.println("coin 0.25 baht 1 coin ");}
  //0.5
    if (get == 0.5){
    Serial.println("coin 0.5 baht 1 coin");
    Serial.println("coin 0.25 baht 0 coin");}
  //0.25
  if (get == 0.25){
    Serial.println("coin 0.5 baht 0 coin");
    Serial.println("coin 0.25 baht 1 coin");}
  //0.00
  else {
    Serial.println("coin 0.5 baht 0 coin");
    Serial.println("coin 0.25 baht 0 coin");}
  
}

void loop(){
  
}
