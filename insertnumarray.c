#include <stdio.h>
int main(){
	int i,n,pos,num;
	int a[n];
	
	printf("Enter a N : ");
	scanf("%d",&n);
	printf("Enter a array elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter Postion : ");
	scanf("%d",&pos);
	
	printf("\nEnter Num : ");
	scanf("%d",&num);
	for (i=n;i>=pos;i--){
		a[i]=a[i-1];
	}
	a[pos-1]=num;
	n++;
	printf("\nAfter inserting: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
