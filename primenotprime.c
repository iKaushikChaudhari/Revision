#include <stdio.h>
int main(){
	int i,n,flag=0;
	printf("Enter Any Number");
	scanf("%d",&n);
	i=2;
	while(i<=n/2){
		if(n%i==0){
			flag=1;
		}
		i++;
	}
	if(flag==1){
		printf("\nNot a Prime Number");
	}
	else{
		printf("\nPrime Number");
	}
}
