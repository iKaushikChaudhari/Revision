#include<stdio.h>

int main(){
	int n1;
	printf("\n Enter Ther Number : ");
	scanf("%d",&n1);
	if(n1>0){
		printf("\n Positive");
	}
	
	else if(n1<0){
		printf("\n Negative");
	}
	
	else{
		printf("\n Zero");
	}
}
