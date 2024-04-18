#include<stdio.h>
int main (){
	int a[100],n,i;
	int *p;
	
	p=&a[i];
	
	printf("\nEnter The Number :");
	scanf("%d",&n);
	printf("\nEnter Array Elements :");
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	printf("\nArray pointer :");
	for(i=0;i<n;i++){
		printf(" %d ",p[i]);
	}
}
