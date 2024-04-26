#include<stdio.h>
int main(){
	FILE *fp;
	char data[100];
	fp=fopen("Demo.txt","r");
	fscanf(fp,"%s",data);
	printf("Data : %s",data);
//	fgets(data);
	fclose(fp);
	
	return 0;
}
