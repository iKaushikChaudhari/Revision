#include<stdio.h>

int main(){
	int num[5];
	int i;
	printf("Enter Array Elements:");
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	printf("\nEven Array Elements Are:");
	for(i=0;i<5;i++){
		if(num[i]%2==0){
			printf("%d ",num[i]);
		}
	}
	printf("\nodd Array Elements Are:");
	for(i=0;i<5;i++){
		if(num[i]%2!=0){
			printf("%d ",num[i]);
		}
	}
	
	return 0;
}
