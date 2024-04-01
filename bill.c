#include <stdio.h>

int main(){
	
	int cid,pid,qty;
	char name[10],pname[10];
	float price,finalamt,total,cgst,sgst;
	
	
	printf("\n\t==================Customer Details==================");
	printf("\n\tEnter Customer Name          :");
	scanf("%s",&name);
	printf("\n\tEnter Customer ID.           :");
	scanf("%d",&cid);
	printf("\n\t====================================================\n");
	printf("\n\t==================Product Details==================");
	printf("\n\tEnter Product ID             :");
	scanf("%d",&pid);
	printf("\n\tEnter Product Name           :");
	scanf("%s",&pname);
	printf("\n\tEnter Product QTY            :");
	scanf("%d",&qty);
	printf("\n\tEnter Product Price          :");
	scanf("%f",&price);
	printf("\n\t=====================================================\n");
	
	total=(float)price*qty;
	cgst=total*0.18;
	sgst=total*0.18;
	finalamt=price+cgst+sgst;
	
	printf("\n\t===========================Bill===========================");
	printf("\n\tCustomer Name          : %s",name);
	printf("\n\tCustomer ID            : %d",cid);
	printf("\n\t-------------------------------------------------------------------");
	printf("\n\tProduct Id		Product Name		QTY 		Price");
	printf("\n\t%d\t\t\t%s\t\t\t%d\t\t%.2f",pid,pname,qty,price);
	printf("\n\t-------------------------------------------------------------------");
	printf("\n\t						Total : +%.2f",total);
	printf("\n\t						CGST  : +%.2f",cgst);
	printf("\n\t						SGST  : +%.2f",sgst);
	printf("\n\t-------------------------------------------------------------------");
	printf("\n\t				Total Amount : %.2f",finalamt);
	printf("\n\t===========================================================");

}
