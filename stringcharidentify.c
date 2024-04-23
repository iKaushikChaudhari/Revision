#include<stdio.h>
int main(){
	int acnt,scnt,dcnt;
	char a[10];
	int i;
	printf("\nEnter The String :");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]>='a'&& a[i]<='z' || a[i]>='A'&& a[i]<='Z' ){
			acnt++;
		}
		else if(a[i]>=0 && a[i]<=9){
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

