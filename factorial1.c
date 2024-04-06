#include <stdio.h>
int main(){
	int i,n,fact;
	printf("Enter A Number");
	scanf("%d",&n);
	
	while(n>1){
		n=n*(n-1);
		n--;
	}
	printf("%d",n);
}
