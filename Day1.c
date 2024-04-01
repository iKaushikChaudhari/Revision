#include <stdio.h>
#include <stdlib.h>


int main(){
	int n1,n2,sum,sub,mul;
	float div;
	printf("\nEnter First Number: ");
	scanf("%d",&n1);
	
	printf("\nEnter Second Number: ");
	scanf("%d",&n2);
	sum=n1+n2;
	printf("\nSum Of Two Numbers Number: %d",sum);
	sub=n1-n2;
	mul=n1*n2;
	div=n1/n2;
	printf("\nSub Of Two Numbers Number: %d",sub);
	printf("\nMul Of Two Numbers Number: %d",mul);
	printf("\nDiv Of Two Numbers Number: %d",div);



	return 0;
}
