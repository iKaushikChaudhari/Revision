#include<stdio.h>
void fac()
{
	int i,n,fact=1;
	printf("Enter A Number");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		fact*=i;
		i++;
	}
	printf("factorial is %d",fact);
	return fact;
	printf("%d",n);
}

int main()
{

	
	fac();
	
}
