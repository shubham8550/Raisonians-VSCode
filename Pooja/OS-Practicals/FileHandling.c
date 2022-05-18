#include <stdio.h>
#include <string.h>

int main ()
{
    FILE *filePointer;
    char dataToBeRead[50];
    filePointer=fopen("pooja.txt","r");
    if(filePointer==NULL)
    {
        printf("Failed to open");
    }
    else
    {
        printf("The file is now open\n");
        while(fgets(dataToBeRead,50,filePointer)!=NULL)
        {
            printf("%s",dataToBeRead);
        }
        fclose(filePointer);
        printf("\nData successfully read\n");
        printf("The file is now closed\n");
    }
    return 0;
}