#include<stdio.h>
#include<math.h>
	int main(){
		printf("****************** Money changer ******************");
		
		float money ; //money input
		printf("\nMoney Input : ");
		scanf("%f",&money);
		printf("\nMoney = %.2f Bath." ,money);
		
		float price ; // price input
		printf("\nHow much is it(goods) : ");
		scanf("%f",&price);
		printf("\nPrice = %.2f Bath.",price);
		
		printf("\n**************************************************");
		
		float change = money - price; // change input
		printf("\nChange = %.2f Bath.",change);
		
		printf("\n**************************************************");
		
		int N1000 = change/1000;
		int N500 = fmod(change,1000)/500;
		float a = fmod(change,1000);
		int N100 = fmod(a,500)/100;
		float b = fmod(a,500);
		int N50 = fmod(b,100)/50;
		float c = fmod(b,100);
		int N20 = fmod(c,50)/20;
		float d = fmod(c,50);
		int N10 = fmod(d,20)/10;
		float e = fmod(d,20);
		int N5 = fmod(e,10)/5;
		float f = fmod(e,10);
		int N1 = fmod(f,5)/1;
		float g = fmod(f,5);
		int N0_5 = fmod(g,1)/0.5;
		float h = fmod(g,1);
		int N0_25 = fmod(g,0.5)/0.25;
		
		
		
	
		if (change == 0){
			printf("\nNo change!");
		}
		else if( change < 0){
			printf("\nSorry! You don't have enough money to buy.");
		}
		else if(change > 0){
			if (fmod(change,1000) == 0){
				printf("\nN1000 = %d EA",N1000);
			}
			else{
				printf("\nN1000 = %d EA \nN500 = %d EA \nN100 = %d EA \nN50 = %d EA \nN20 = %d EA \nN10 = %d EA \nN5 = %d EA \nN1 = %d EA \nN0.50 = %d EA \nN0.25 = %d EA",N1000,N500,N100,N50,N20,N10,N5,N1,N0_5,N0_25);
			}
		}
		printf("\n***************** Thank you! *******************");
	}
