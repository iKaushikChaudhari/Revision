#include <stdio.h>

int main(){
	
	int empid;
	char name[10];
	float basesal;
	float pf,hra,tax,bonus;
	float grosssal;
	
	printf("\n\t==================Details==================");
	printf("\n\tEnter Employee Name          :");
	scanf("%s",&name);
	printf("\n\tEnter Employee ID.            :");
	scanf("%d",&empid);
	printf("\n\tEnter Employee Salary    :");
	scanf("%f",&basesal);
	printf("\n\t===========================================\n");
	
	pf = basesal*0.10;
	tax = basesal*0.02;
	hra = basesal*0.05;
	bonus = basesal*0.10;
	grosssal = basesal + hra - pf - tax + bonus;
	
	printf("\n\t==================Deloitte==================");
	printf("\n\tEmployee Name          : %s",name);
	printf("\n\tEmployee ID            : %d",empid);
	printf("\n\tEmployee Base Salary   : +%.2f",basesal);
	printf("\n\tEmployee PF            : -%.2f",pf);
	printf("\n\tEmployee HRA           : +%.2f",hra);
	printf("\n\tEmployee Tax           : -%.2f",tax);
	printf("\n\tEmployee Bonus         : +%.2f",bonus);
	printf("\n\t---------------------------------------------");
	printf("\n\tEmployee Gross Salary  : %.2f",grosssal);
	printf("\n\t=============================================");

}
