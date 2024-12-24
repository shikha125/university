#include<stdio.h>
#include<math.h>

void si(int p1,int r1,int t1)
		{
		printf("simple calculator");
		printf("enter p,r,t");
		scanf("%d %d %d",&p1,&r1,&t1);
			int simple=(p1*r1*t1)/100;
			printf("the simple interest is :%d",simple);
		
		}
		
int square(int a)
		{
				return a*a;
		}
int main()
{
	int num;
	int p,r,t;
	printf("enter the number you want to perform\n");
	printf("1.For simple interest calculator\n");
	printf("2.For scientific calculator\n");
	printf("3.For interest calculator\n");
	printf("4.For temperature calculator\n");
	printf("5.For exit\n");
	scanf("%d",&num);


	switch(num)
	{

		case 1:
		
		 si(p,r,t);

		break;
		case 2:
		
		{
			int result=square(5);
			printf("the square is%d\n",result);
			return 0;
		}	
		break;
		case 3:
		printf("1.For interest calculator");
		break;
		case 4:
		printf("1.For scientific calculator");
		break;
		default:
		printf("enter no between 1-5");


	}
return 0;
}