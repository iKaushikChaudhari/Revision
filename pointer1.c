#include<stdio.h>
int main (){
	int a;
	int *p;
	
	printf("\n Address : %d",&p);

	printf("\nEnter The Number :");
	scanf("%d",&a);
	//p=10;
	p=&a;
	printf("\n Address : %d",&p);
	printf("\n Value : %d",a);
	printf("\n Addres : %d",&a);
	
	printf("\n Value : %d",p);
	printf("\n Address : %d",&p);
	printf("\n Value in Address : %d",*p);
}
