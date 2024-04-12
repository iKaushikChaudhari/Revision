/*
Create array
display array
reverse array
even 
odd
search
sum
average
*/
#include<stdio.h>

int main(){
	int i,ch,n;
	int num[n];
	printf("\nEnter The choice \n1Create array\n 2display array \n3reverse array \n4even \5odd \n6search \n7sum \n8average\n9max \n10min\n11 delete \n12 insert\n13 exit");
	scanf("%d",&ch);
	do{
	switch(ch){
		case 1:{
			printf("how many elements you want:");
			scanf("%d",&n);
			printf("Enter Array Elements:");
			for(i=0;i<n;i++){
			scanf("%d",&num[i]);
			}
			break;
		}
		case 2:{
			printf("Array Elements Are:");
			for(i=0;i<n;i++){
			printf("%d",&num[i]);
			}
			break;
		}
		case 3:{
			printf("Rev Elements Are:");
			for(i=n;i>=0;i--){
			printf("%d",&num[i]);
			}
			break;
		}
		case 4:{
			printf("\nEven Array Elements Are:");
			for(i=0;i<n;i++){
				if(num[i]%2==0){
					printf("%d ",num[i]);
				}
			}
			break;
		}
		case 5:{
			printf("\nOdd Array Elements Are:");
			for(i=0;i<n;i++){
				if(num[i]%2!=0){
					printf("%d ",num[i]);
				}
			}
			break;
		}
		case 6:{
			
			break;
		}
		case 7:{
			
			break;
		}
		case 8:{
			
			break;
		}
		default:{
			printf("Enter Correct Choice");
			break;
		}
	}
	}while(ch!=13);
	return 0;
}
