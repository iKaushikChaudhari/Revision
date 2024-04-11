#include<stdio.h>

int main(){
	int num[5];
	int i;
	printf("Enter Array Number:");
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	printf("Array Number Are:");
	for(i=0;i<5;i++){
		printf("%d ",num[i]);
	}
}
