#include <stdio.h>

int main(){
	
	int roll;
	char name[10];
	int sub1,sub2,sub3,sub4,sub5,total;
	float per;
	
	
	printf("\n\t==================Details==================");
	printf("\n\tEnter Your Name          :");
	scanf("%s",&name);
	printf("\n\tEnter Your Roll No.      :");
	scanf("%d",&roll);
	printf("\n\tEnter Your Sub1 Marks    :");
	scanf("%d",&sub1);
	printf("\n\tEnter Your Sub2 Marks    :");
	scanf("%d",&sub2);
	printf("\n\tEnter Your Sub3 Marks    :");
	scanf("%d",&sub3);
	printf("\n\tEnter Your Sub4 Marks    :");
	scanf("%d",&sub4);
	printf("\n\tEnter Your Sub5 Marks    :");
	scanf("%d",&sub5);
	printf("\n\t===========================================");
	
	total=sub1+sub2+sub3+sub4+sub5;
	per=(float)total/5;
	
	printf("\n\t==================MarkSheet==================");
	printf("\n\tName          :%s",name);
	printf("\n\tRoll No.      :%d",roll);
	printf("\n\tSub1 Marks        :%d/100",sub1);
	printf("\n\tSub2 Marks        :%d/100",sub2);
	printf("\n\tSub3 Marks        :%d/100",sub3);
	printf("\n\tSub4 Marks        :%d/100",sub4);
	printf("\n\tSub5 Marks        :%d/100",sub5);
	printf("\n\tTotal Marks       :%d/500",total);
	printf("\n\t---------------------------------------------");
	printf("\n\tTotal Percentage  :%.2f",per);
	printf("\n\t=============================================");

}
