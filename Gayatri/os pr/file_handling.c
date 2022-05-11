# include <stdio.h>
# include <string.h>

int main()
{
    FILE *fp ;
    char data[50];
    fp = fopen("text.txt", "r") ;
    if ( fp == NULL )
    {
        printf( "file failed to open.\n" ) ;
    }
    else
    {
         
        printf("The file is now opened.\n") ;
        while( fgets (data, 50, fp) != NULL )
        {
            printf( "%s" , data) ;
        }
        fclose(fp) ;
        printf("\n Data successfully read from file\n");
        printf("The file is now closed.\n") ;
    }
    return 0; 
}