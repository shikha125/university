#include<stdio.h>
int main()
{
	int amt,totalamt,dis;

	printf("enter the amount:");
	scanf("%d",&amt);

	if(amt>500 && amt<=1000)
	{
		dis=amt*0.05;
		totalamt=amt-dis;
		printf("your total amount is : %d",totalamt);
	}
	else if(amt>1000 && amt<=2000)
	{
		dis=amt*0.10;
		totalamt=amt-dis;
		printf("your total amount is : %d",totalamt);
	}
	else if(amt>2000)
	{
	dis=amt*0.15;
		totalamt=amt-dis;
		printf("your total amount is : %d",totalamt);
	}
	else
		{
		printf("the total amount is %d",amt);
		}

return 0;
}
