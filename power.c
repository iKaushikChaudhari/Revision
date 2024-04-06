#include <stdio.h>
int main()
	{
		int i,x,y,result;
		printf("\n Enter the number : ");
		scanf("%d",&x);
		printf("\n Enter the power : ");
		scanf("%d",&y);
		x^y;
		//3^4 = 81
		
		i = 0;
		while(i<y)
		{
			
			result = result * x;
			i++;
		}
		
		printf("\nPower of %d ^ %d is %d",x,y,result);
		
	}
