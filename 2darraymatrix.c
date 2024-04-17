#include<stdio.h>
int main(){
	int a[100][100],i,j,r,c;
	printf("Enter The Row: ");
	scanf("%d",&r);
	
	printf("Enter The Col: ");
	scanf("%d",&c);
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
		
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
			
	}
		
		
}
