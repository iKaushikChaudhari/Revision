#include<stdio.h>
int main(){
	int a[100][100],b[100][100],i,j,r1,c1,r2,c2,mul[100][100],k;
	printf("\nEnter First Matix Row: ");
	scanf("%d",&r1);
	
	printf("\nEnter First Matix Col: ");
	scanf("%d",&c1);
	printf("\nEnter First Matrix: ");
	
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter Second Matix Row: ");
	scanf("%d",&r2);
	
	printf("\nEnter Second Matix Col: ");
	scanf("%d",&c2);
	printf("\nEnter Second Matrix: ");
	
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	if(r1==c2){
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				for(k=0;k<c2;k++)
				mul[i][j]+=a[i][j]*b[i][j];
		}	
	}
		printf("\n Multiplication of Matrix: \n");
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				printf("%4d",mul[i][j]);
			}
			printf("\n");
			
	}
	}	
	else {
		printf("\nMultiplication Not Posible!!");
	}	
	
		
		
}
