#include<stdio.h>
int main (){
	int a,b;
	int *p,*q;
	
	p=&a;
	q=&b;

	printf("\nEnter The Number :");
	scanf("%d %d",&*p,&*q);
	
	
	printf("\n Addition : %d",(*p+*q));
	
}
