#include<stdio.h>
#include<string.h>
//define a union
union Data
{
	int i;
	float f;
	char str[20];
};

int main()
{
	//declare a union variable
	union Data data;

	//assign an int value to the union
	data.i=10;
	printf("data.i: %d\n",data.i); 

	//assign an float value to the union
	data.f=220.5;
	printf("data.f: %.2f\n",data.f);

	//assign a str val to union
	strcpy(data.str,"hello");
	printf("data.str: %s\n",data.str);

	return 0;

}