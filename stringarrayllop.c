#include<stdio.h>
int main(){
	char a[100];
	int i;
	
	printf("\nEnter A String :");
	scanf("%s\n",&a);
	
	for (i=0;a[i]!='\0';i++){
		printf("%c",a[i]);	
	}
	
	return 0;
}
