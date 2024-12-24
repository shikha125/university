#include<stdio.h>

void add(int a,int b)
{
	int a,b;
	int sum=a+b;
	printf("sum with parameters and without return value:%d\n",sum);
}

int main()
{
	add(5,3);
	return 0;
}