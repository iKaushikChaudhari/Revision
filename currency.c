#include<stdio.h>
int main(){
	int ch1,ch2,c;
	float samt,ramt;
	
	menu:
		printf("\n=====Menu=====");
		printf("Enter Choice");
		printf("\n1. Rupee\n2Dollar\n3Euro");
		scanf("%d",&ch1);
		switch(ch1)
		{
			case 1:{
				rupee:
				printf("Enter AMT Rupee ");
				scanf("%f",&samt);
				printf("Enter to convert");
				printf("\n1Dollar\n2Euro");
				scanf("%d",&ch2);
				switch(ch2){
					case 1:{
						ramt=samt/83.54;
						printf("\n%.2f Rupee = %.2f Dollar",samt,ramt);
						break;
					}
					case 2:{
						ramt=samt/89.97;
						printf("\n%.2f Rupee = %.2f Euro",samt,ramt);
						break;
					}
				}
				printf("\n 1 to Enter Other Rupee");
				scanf("\n%d",&c);
				if (c==1){
					goto rupee;
				}
				break;
			}
			case 2:{
				dollar:
				printf("Enter AMT Dollar ");
				scanf("%f",&samt);
				printf("Enter to convert");
				printf("\n1Rupee\n2Euro");
				scanf("%d",&ch2);
				switch(ch2){
					case 1:{
						ramt=samt*80;
						printf("\n%.2f Dollar = %.2f Rupee",samt,ramt);
						break;
					}
					case 2:{
						ramt=samt*0.93;
						printf("\n%.2f Dollar = %.2f Euro",samt,ramt);
						break;
					}
				}
				
				printf("\n 1 to Enter Other Dollar");
				scanf("\n%d",&c);
				if (c==1){
					goto dollar;
				}
				break;
			}
			case 3:{
				euro:
				printf("Enter AMT Euro ");
				scanf("%f",&samt);
				printf("Enter to convert");
				printf("\n1Rupee\n2dollar");
				scanf("%d",&ch2);
				switch(ch2){
					case 1:{
						ramt=samt*80;
						printf("\n%.2f Euro = %.2f Rupee",samt,ramt);
						break;
					}
					case 2:{
						ramt=samt*0.93;
						printf("\n%.2f Euro = %.2f Dollar",samt,ramt);
						break;
					}
				printf("\n 1 to Enter Other euro");
				scnaf("\n%d",&c);
				if (c==1){
					goto euro;
				}
			
				}
			break;
			}
			
			
		}
		printf("Want to go to main Menu press 1");
		scanf("%d",&c);
		if (c==1){
			goto menu;
		}
	
}
