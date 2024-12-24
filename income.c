#include<stdio.h>
int main()
{
	float income;
	float totalgain,netpro;
	printf("please enter your income:");
	scanf("%f",&income);

	if(income<250000)
		{
		printf("your income is :%2f",income);
		printf("No tax will be deducted");
		}
	else if(income>250000 && income<500000)
		{
		printf("your income is %.2f \n",income);
		totalgain=income*0.05;
		netpro=income-totalgain;
		printf("Hence the net profit after deducting the tax is %.2f \n",netpro);
		}

	else if(income>500000 && income<100000)
		{
		printf("your income is %.2f \n",income);
		totalgain=income*0.1;
		netpro=income-totalgain;
		printf("Hence the net profit after deducting the tax is %.2f\n",netpro);
		}

	else if(income>1000000 && income<1500000)
		{
		printf("your income is %.2f \n",income);
		totalgain=income*0.2;
		netpro=income-totalgain;
		printf("Hence the net profit after deducting the tax is %.2f\n",netpro);
		}
	else
		{
		printf("your income is %2f \n",income);
		totalgain=income*0.3;
		netpro=income-totalgain;
		printf("Hence the net profit after deducting the tax is %.2f\n ",netpro);
		}
return 0;
}