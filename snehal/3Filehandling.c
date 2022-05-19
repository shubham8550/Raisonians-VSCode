# include <stdio.h>
# include <string.h>
int main()
{
    FILE *filePointer ;
    char dataToBeRead[50];
    // To create a file 
    filePointer = fopen("demo.txt", "w+");
    fprintf(filePointer, "%s %s ", "Hello", "Rashmi");
    fclose(filePointer);

    // To read a file
    filePointer = fopen("demo.txt", "r") ;
    if ( filePointer == NULL )
    {
        printf( "demo.txt file failed to open." ) ;
    }
    else
    {     
        printf("The file is now opened.\n") ;
        while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
        {
            printf( "%s\n" , dataToBeRead ) ;
        }
        fclose(filePointer) ;    
        printf("Data successfully read from file demo.txt\n");
        printf("The file is now closed.") ;
    }
    return 0;       
}
 