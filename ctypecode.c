#include<stdio.h>
#include<ctype.h>
int main(){
	int acnt,scnt,dcnt;
	char a[10];
	int i;
	acnt=scnt=dcnt=0;
	printf("\nEnter The String :");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++){
		if(isalpha(a[i])){
			acnt++;
		}
		else if(isdigit(a[i])){
			dcnt++;
		}
		else{
			scnt++;
		}
	}
	
	printf("\nAcnt %d",acnt);
	printf("\nScnt %d",scnt);
	printf("\nDcnt %d",dcnt);
	
	return 0;

}

