#include<stdio.h>
int main()
{
int c;
float f;

	for(c=0;c<=100;c++)
	{
		f=((9/5)*c+32);
		printf("the conversion for %d degree is %.2f :\n",c,f);
	}
		return 0;
}