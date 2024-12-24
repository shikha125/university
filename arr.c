#include<stdio.h>
int main()
{
int sum=0,avg=0,total=0,sq=0;

int number[5];//={1,2,3,4,5};homogeneous type array of integers



	for(int i=0;i<5;i++)
{
		printf("enter no:");
		scanf("%d",&number[i]);

		sum=sum+number[i];
		avg=sum/5;
		
		}

	
	for(int i=0;i<5;i++)
	{
		printf("%d\n",number[i]);
	}
printf("the square of array is:\n");
for(int i=0;i<5;i++)
	{
		sq=number[i]*number[i];
		printf("%d\n",sq);
		total=total+sq;
		
	}
int max=number[0];
int min=number[0];

for(int i=0;i<5;i++)
{

		
		if(max<number[i])
		{
			max=number[i];
		}
		if(min>number[i])
		{
			min=number[i];
		}
			
}
printf("the sum is %d\n",sum);
printf("the avg is %d\n",avg);
printf("the max no is : %d\n",max);
printf("the min no is : %d\n",min);
printf("the total is %d\n",total);


return 0;
}