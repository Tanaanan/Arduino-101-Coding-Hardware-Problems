//Money Changer Arduino
void setup()
{
    Serial.begin(115200);
    
    //Money,Price,Change input
    float MONEY = 2000 ;//Money input
    float PRICE = 1000.75 ; // Price input
    float BACK = (MONEY - PRICE);//BACK = Change input
    int GET = BACK;

    //Money,Price,Change output
    Serial.println("*************** Money Changer *****************");
    Serial.print("Money = ");
    Serial.println(MONEY);
    //Serial.println("***********************************************");
    Serial.print("Price = ");
    Serial.println(PRICE);
    //Serial.println("***********************************************");
    Serial.print("Change = ");
    Serial.println(BACK);
    Serial.println("***********************************************");
  
  if (GET < 0){
    Serial.println("Sorry, you don't have enough money to buy!");
    Serial.println("**************** Thank you! *******************");
  }
  else if (GET == 0){
    Serial.println("No change, Thank you!");
    Serial.println("**************** Thank you! *******************");
  }
  else if (GET >0){
  // 1000 baht
    int N1000 = GET%1000;
    int k1000 = GET/1000;
    Serial.print("money 1000 baht = ");
    Serial.print(k1000);
    Serial.println(" EA");
    Serial.println("***********************************************");
  
  // 500 baht
    int N500 = N1000%500;
    int B500 = N1000/500;
    Serial.print("money 500 baht = ");
    Serial.print(B500);
    Serial.println(" EA");
    Serial.println("***********************************************");

  // 100 baht
    int N100 = N500%100;
    int k100 = N500/100;
    Serial.print("money 100 baht = ");
    Serial.print(k100);
    Serial.println(" EA");
    Serial.println("***********************************************");
  
  // 50 baht
    int N50 = N100%50;
    int B50 = N100/50;
    Serial.print("money 50 baht = ");
    Serial.print(B50);
    Serial.println(" EA");
    Serial.println("***********************************************");

  // 20 baht 
    int N20 = N50%20;
    int B20 = N50/20;
    Serial.print("money 20 baht = ");
    Serial.print(B20);
    Serial.println(" EA");
    Serial.println("***********************************************");

  // 10 baht
    int N10 = N20%10;
    int k10 = N20/10;
    Serial.print("coin 10 baht = ");
    Serial.print(k10);
    Serial.println(" EA");
    Serial.println("***********************************************");

  // 5 baht
    int N5 = N10%5;
    int B5 = N10/5;
    Serial.print("coin 5 baht = ");
    Serial.print(B5);
    Serial.println(" EA");
    Serial.println("***********************************************");
  
  // 2 baht
    int N2 = N5%2;
    int B2 = N5/2;
    Serial.print("coin 2 baht = ");
    Serial.print(B2);
    Serial.println(" EA");
    Serial.println("***********************************************");
  
  // 1 baht
    int N1 = N2%1;
    int k1 = N2/1;
    Serial.print("coin 1 baht ");
    Serial.print(k1);
    Serial.println(" EA");
    Serial.println("***********************************************");
  
 float get = BACK - GET ;//get = stang float
   
 //0.75 
   
  if (get == 0.75){
    Serial.println("coin 0.50 baht = 1 EA");
    Serial.println("coin 0.25 baht = 1 EA");
    Serial.println("**************** Thank you! *******************");}
  //0.5
  else if (get == 0.5){
    Serial.println("coin 0.50 baht = 1 EA");
    Serial.println("coin 0.25 baht = 0 EA");
    Serial.println("**************** Thank you! *******************");}
  //0.25
  else if (get == 0.25){
    Serial.println("coin 0.50 baht = 0 EA");
    Serial.println("coin 0.25 baht = 1 EA");
    Serial.println("**************** Thank you! *******************");}
  //0.00
  else {
    Serial.println("coin 0.50 baht = 0 EA");
    Serial.println("coin 0.25 baht = 0 EA");
    Serial.println("**************** Thank you! *******************");}
  }
  
}

void loop(){
  
}
