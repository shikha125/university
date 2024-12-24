#include<stdio.h>

int main()
{
	FILE *file;
	char buffer[255];

	//open file for reading
	file = fopen("sample.txt","r");
	if(file==NULL){
		printf("Error opening file!\n");
		return 1;
	}
//read content from the file and print it
	while(fgets ( buffer,sizeof(buffer),file)){
	printf("%s",buffer);
	}
	return 0;
}