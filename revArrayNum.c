#include<stdio.h>

int main(){
	int num[5];
	int i;
	printf("Enter Array Elements:");
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	printf("Rev Array Elements Are:");
	for(i=4;i>=0;i--){
		printf("%d ",num[i]);
	}
	return 0;
}
