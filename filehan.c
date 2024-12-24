#include<stdio.h>

int main()
{
FILE *file;
char content[] = "hello,this is a asample text";

file=fopen("sample.txt","w");
if(file==NULL){
	printf("error opening file\n");
	return 1;
}

	fprintf(file,"%s\n",content);
	fclose(file);

	printf("file written successfully");
	return 0;
}