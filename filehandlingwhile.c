#include<stdio.h>
int main(){
	FILE *fp;
	char ch;
	char fname[100];
	
	printf("Enter The File Name ");
	scanf("%s",fname);
	
	fp=fopen(fname,"w");
	
	if(fp)
	{
		while((ch = getchar())!=EOF){
			fputc(ch,fp);
		}
		fclose(fp);
	}
	else{
		printf("ERROR!!!");
	}

	
	return 0;
}
