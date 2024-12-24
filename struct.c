//university dept,id,course name,fees
#include<stdio.h>
#include<conio.h>
struct Student
{
	int deptno;
	char c_name[50];
	int fees;
};
int main()
{
	struct Student s[5];
	for(int i=0;i<=5;i++)
	{
		printf("enter dept no");
		scanf("%d",&s[i].deptno);
		printf("Enter course name");
		//scanf("%s",&s[i].c_name);

		fgets(s[i].c_name,20,stdin);
getchar();
		printf("enter fees");
		scanf("%d",&s[i].fees);
	}
	

}