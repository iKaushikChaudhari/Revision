#include<stdio.h>

int main(){
	int n1,n2,ch;
	Menu:
	printf("\n Enter Two Number : ");
	scanf("%d%d",&n1,&n2);
	if(n1>n2){
		printf("\n N1 Is greator");
	}
	
	else if(n1<n2){
		printf("\n  n2 is grator");
	}
	
	else if (n1==n2){
		printf("\n  Equal");
	}
	
	printf("\n Enter 1 To Check Other Number");
	scanf("%d",&ch);
	if(ch==1){
		goto Menu;
	}

	
	return 0;
}
