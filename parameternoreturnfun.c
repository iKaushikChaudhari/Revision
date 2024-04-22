//Parameter with no return
#include<stdio.h>
void add(int x, int y){
	printf("Addition is: %d",(x+y));
	
}

int main(){
	int a,b;
	printf("Enter 2 numbers :");
	scanf("%d %d",&a,&b);
	add(a,b);
	return 0;
}
