#include<stdio.h>

int main()
{
	FILE *file;
	char buffer[255];

	//open file for reading
	file = fopen("output.txt","a");
	if(file==NULL){
		printf("Error opening file!\n");
		return 1;
	}
	//prompt user to enter a line of text
	printf("enter a line of text");
	fgets(buffer,sizeof(buffer),stdin);
	//write input to file
	fprintf(file,"%s",buffer);
	//close the file
	fclose(file);
return 0;
}