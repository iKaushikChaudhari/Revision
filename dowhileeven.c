#include<stdio.h>

int main (){
	int i,n;
	printf("Enter N");
	
	scanf("%d",&n);
	printf("\nEven number Are");
	i=1;
	do{
		printf("\n%d",i*2);
		i++;
	}
	while (i<=n/2);
	return 0;
}
