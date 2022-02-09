#include <stdio.h>
#include <string.h>

int main()
{
    FILE *filePointer ;
    char data[50] = "My name is Hardik Jain.";
    filePointer = fopen("FH.txt", "w") ;

    if ( filePointer == NULL )
    {
        printf( "FH.txt file failed to open." ) ;
    }
    else
    {
        printf("The file is now opened.\n") ;
        if ( strlen ( data ) > 0 )
        {
             
            fputs(data, filePointer) ;
            fputs("\n ", filePointer) ;
        }
         
        fclose(filePointer) ;
         
        printf("Data successfully written in FH.txt.\n");
        printf("The file is now closed.") ;
    }
    return 0;
}