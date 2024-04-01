#include<stdio.h>

int main(){
	int n1,n2;
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

	
	return 0;
}
