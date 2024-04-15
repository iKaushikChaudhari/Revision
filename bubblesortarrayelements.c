#include <stdio.h>
int main(){
	int i,n,j,k;
	int a[n];
	
	printf("Enter a N : ");
	scanf("%d",&n);
	printf("Enter a array elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	
	for(i=0;i<n;i++){
		
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("Array elements : ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
