#include<stdio.h>

int main(){
	int n1;
	printf("\n Enter Ther Number : ");
	scanf("%d",&n1);
	if(n1%5=0 && n1%3=0){
		printf("\n Divisible By both 3 and 5");
	}
	
	else if(n1%5=0){
		printf("\n  Divisible By 5");
	}
	
	else if(n1%3=0){
		printf("\n  Divisible By 3");
	}
	
	else{
		printf("\n Not Divisible By 3 and 5");
	}
	
	return 0;
}
