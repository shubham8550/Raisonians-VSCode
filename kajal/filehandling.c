#include.<stdio.h>
#include.<string.h>
int main()

    char dataTOBERead[50];
    filePointer=fopen("demo.txt","r");
    if(filePointer==NULL)
    {
        printf("practical1os.c file failed to open.");
    }
    else
    {
         printf("the file is now opened.\n");
    while(fgets(dataTOBERead,50,filePointer)!=NULL)
    {
        printf("%s",dataTOBERead);
        
    }
    fclose(filePointer);

    }
    return 0;
}