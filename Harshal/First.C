#include<stdio.h>
#include<conio.h>
void main()
{

	FILE *fptr;
	char c;
	clrscr();
	fptr=fopen("hello.txt","r");

	if(fptr==NULL)
	{
		printf("Cannot Open File");
		exit(0);
	}
	else
	{
		c=fgetc(fptr);
		while(c!=EOF)
		{
			printf("%c",c);
			c=fgetc(fptr);
		}
	}
       //	fclose(fptr);
	getch();
}