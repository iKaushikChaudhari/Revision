#include <stdio.h>
int main(){
	int i,n;
	printf("Enter A Number");
	scanf("%d",&n);
	i=1;
	while(n<1){
		i=i*n;
		n--;
	}
	printf("%d\n",i);
}
