//1/(1+1^2),2/(2+2^2),3/(3+3^2).......n
#include<stdio.h>
#include<math.h>

int main()
{
	int n,series;
	printf("enter the n no");
	scanf("%d",&n);

	for(int i=0;i<=n;i++)
		{
			series=(n/(n+pow(n,2));
			printf("%d",series[i]);
		}
	return 0;
}