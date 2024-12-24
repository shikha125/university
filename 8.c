#include<stdio.h>
int main()
{
	int steps,total=0,average=0,goal,exceededstep,count;
	for(int i=1;i<=7;i++)
	{
	printf("enter the steps for %d day:",i);
	scanf("%d",&steps);
	if(steps<0)
	{
		printf("steps cannot be in negative pls enter positive number");
	}
	total+=steps;
	average=total/7;
	printf("enter the step goal:");
	scanf("%d",&goal);
	if(steps>=goal)
	{
		printf("goal  met");
		count=count+1;
		return steps-goal;
	}
	else
	{
		printf("goal not met");
	}printf("\n");
		
}
printf("total steps = %d\n",total);
printf("average steps = %d\n",average);
printf("count of days %d",count);

	
}
