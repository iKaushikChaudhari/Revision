#include <stdio.h>
#include <stdlib.h>


int main(){
	float h,b,a1;
	
	printf("\nEnter Base and height: ");
	scanf("%f %f",&b,&h);
	a1=0.5*b*h;
	printf("\nArea Of Rectangle :%.2f sq cm",a1);

	return 0;
}
