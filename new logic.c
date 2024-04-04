#include<stdio.h>

int main (){
	int i,x,y;
	
	printf("Enter Start");
	scanf("%d",&x);
	printf("Enter End");
	scanf("%d",&y);
	printf("\nEven number Are");
	x=(x%2==0)?x:x+1;
	for (i=x; i<=y ;i++){
		printf("\n%d",i);
	}
	return 0;
}
