int input;
int ran;
int user_in = 0;
int score_player = 0;
int score_bot = 0;
int Round = 1;
void setup() {
  Serial.begin(115200);
  Serial.println("Rock-Scrissors-Paper Game");
  Serial.println("1 = Rock");
  Serial.println("2 = Scrissors");
  Serial.println("3 = Paper");
  Serial.println("Type a num :");

}

void loop() {
  ran = random(1,4);
  
  if (Serial.available()>0){
    input = Serial.read();
    
     Serial.println("");
     Serial.println("");

     Serial.print("Round: ");Serial.println(Round);//Round
     Serial.println("-------Player----------");
    user_in = input - 48; //user input
    switch(user_in){
      case 1: 
        Serial.println("ROCK Selected");
        break;
      case 2: 
        Serial.println("Scrissor Selected");
        break;
      case 3: 
        Serial.println("Paper Selected");
        break;
      default:
        Serial.println("Command not found");
        
      }

      if (user_in >= 0){
        Round++;
        }
      
      Serial.println("----------Bot----------");
     switch(ran){
      case 1: 
        Serial.println("ROCK Selected");
        break;
      case 2: 
        Serial.println("Scrissor Selected");
        break;
      case 3: 
        Serial.println("Paper Selected");
        break;
      default:
        Serial.println("Command not found");  }

     Serial.println("--------Result---------");   

    if (user_in == ran){//Match game
      Serial.println("Tie!");
      }
    else if ((user_in + ran) == 3){ //Rock, Scrissor
      if (user_in == 1){
        Serial.println("Player win!");
        score_player++;
        }
      else {
        Serial.println("Bot win!");
        score_bot++;
        } }
    else if ((user_in + ran) == 4){//Rock, Paper
      if (user_in == 3){
        Serial.println("Player win!");
        score_player++;
        }
      else {
        Serial.println("Bot win!");
        score_bot++;
        } }
    else if ((user_in + ran) == 5){//Scrissor, Paper
      if (user_in == 2) {
        Serial.println("Player win!");
        score_player++;
        }
      else {
        Serial.println("Bot win!");
        score_bot++;
        }}
        
    Serial.println("---------Score---------");
    Serial.print("User: ");Serial.println(score_player);
    Serial.print("Bot: ");Serial.println(score_bot);
    Serial.println("-----------------------");
    

   
    
    }

}
