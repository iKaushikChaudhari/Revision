#include<stdio.h>

int main (){
	int i,x,y,g;
	
	printf("Enter Start");
	scanf("%d",&x);
	printf("Enter End");
	scanf("%d",&y);
	g=y-x;
	printf("\nEven number Are");
	for (i=x; i<=g ;i+2){
		printf("\n%d",i);
	}
	return 0;
}
