#include<stdio.h>
int add(int x, int y){
	
//	printf("Addition : %d",x+y));
	return(x+y);
}

int main()
{
	int a,b;
	printf("\nEnter Two numbers: ");
	scanf("%d %d",&a,&b);
	
	printf("Addition : %d",add(a,b));
	
	return 0;
}
