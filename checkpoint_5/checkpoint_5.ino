int Led_1 = 2;
int Led_2 = 4;
int Led_3 = 6;
int Led_4 = 8;

void setup(){
}
void loop (){
pinMode(Led_1, OUTPUT);
pinMode(Led_2, OUTPUT);
pinMode(Led_3, OUTPUT);
pinMode(Led_4, OUTPUT);

// Led 1
digitalWrite(Led_1,HIGH);
delay(100);
digitalWrite(Led_1,LOW);
delay(100);

// Led 2
digitalWrite(Led_2,HIGH);
delay(100);
digitalWrite(Led_2,LOW);
delay(100);

// Led 3
digitalWrite(Led_3,HIGH);
delay(100);
digitalWrite(Led_3,LOW);
delay(100);

// Led 4
digitalWrite(Led_4,HIGH);
delay(100);
digitalWrite(Led_4,LOW);
delay(100);



    }
