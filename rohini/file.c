#include<stdio.h>
#include<conio.h>
//#include<file.h>
void main()
{
    FILE *fptr;
    char filename[50],c;
    clrscr();
    fptr=fopen("bubblesort.txt","r");

    if(fptr==NULL)
    {
        printf("cannt open file");
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
    fclose(fptr);
    getch();
}
