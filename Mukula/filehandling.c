#include<stdio.h>
#include<string.h>
int main()
{
    FILE *filePointer;
    char data[50];
    filePointer=fopen("fcfs.c","r");
    if(filePointer==NULL)
    {
        printf("The file is fail to open.\n");
    }
    else{
        printf("The file is opened\n");
    }
    while(fgets(data,50,filePointer)!=NULL)
    {
        printf("%s",data);
    }
    fclose(filePointer);
    printf("Data sucessfully read from the file\n");
    printf("The file is now closed\n");
    return 0;


}
