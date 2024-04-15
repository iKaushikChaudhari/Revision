#include <stdio.h>
int main(){
	int a[100],i,n,min,max;
	printf("Enter a N : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	min=max=a[0];
	for(i=1;i<n;i++){
		if(max<a[i]){
			max = a[i];
		}
		if(min>a[i]){
			min = a[i];
		}
	}
	printf("%d %d",min,max);
}
