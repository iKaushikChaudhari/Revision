#include<stdio.h>
int main(){
	FILE *fp;
	char data[100];
	char fname[100];
	int sum=0;
	
	printf("Enter The File Name ");
	scanf("%s",fname);
	
	fp=fopen(fname,"r");
	while(!feof(fp)){
		fgets(data,80,fp);
		sum += atoi(data);
	}
	fclose(fp);
	fp= fopen(fname,"a");
	
	fprintf(fp,"\nSum = %d",sum);
	
	return 0;
	
}
