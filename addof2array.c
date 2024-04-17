#include<stdio.h>
int main(){
	int a[100][100],b[100][100],i,j,r1,c1,r2,c2,add[100][100];
	printf("\nEnter First Row: ");
	scanf("%d",&r1);
	
	printf("\nEnter First Col: ");
	scanf("%d",&c1);
	printf("\nEnter Matrix: ");
	
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter Second Row: ");
	scanf("%d",&r2);
	
	printf("\nEnter Second Col: ");
	scanf("%d",&c2);
	printf("\nEnter Matrix: ");
	
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	if(r1==r2 && c1==c2){
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				add[i][j]=a[i][j]+b[i][j];
		}	
	}
		printf("\n Add of Matrix: \n");
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				printf("%4d",add[i][j]);
			}
			printf("\n");
			
	}
	}	
	else {
		printf("\nAddtion Not Posible!!");
	}	
	
		
		
}
