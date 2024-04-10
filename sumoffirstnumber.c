#include<stdio.h>

int main(){
	int i=1,n;
	int sum=0;  
	printf("\nEnter any number to find sum");
	scanf("%d",&n);
	while(i<=n){
		sum= sum + i;
		i++;
	}
	printf("\nSum is %d",sum);
}
