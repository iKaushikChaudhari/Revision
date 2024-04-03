#include<stdio.h>
int main(){
	int num,num2;
	printf("\n Enter The Number : ");
	scanf("%d",&num);
	
	if(num<31){
		num2=num%7;
		switch(num2){
			case 0 :{
				printf("\nSun");
				break;
			}
			
			case 1 :{
				printf("\nMon");
				break;
			}
			
			case 2 :{
				printf("\nTue");
				break;
			}
			
			case 3 :{
				printf("\nWed");
				break;
			}
			
			case 4 :{
				printf("\nThu");
				break;
			}
			
			case 5 :{
				printf("\nFri");
				break;
			}
			
			case 6 :{
				printf("\nSat");
				break;
			}
			
			default:{
				printf("\nInvalid Input");
				break;
			}
		}
	}
}
