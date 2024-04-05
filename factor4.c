#include <stdio.h>
int main(){
	int i,n;
	printf("Enter A Number");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		if(n%i==0){
			printf("%d\n",i);
		}
		i++;
	}
}
