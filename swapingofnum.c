//Swap of two number
#include<stdio.h>
void add(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int main(){
	int a,b;
	printf("Enter A & B :");
	scanf("%d %d",&a,&b);
	add(&a,&b);
	printf("\nA %d",a);
	printf("\nB %d",b);
	return 0;
}
