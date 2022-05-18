#include<stdio.h>
int main()
{
    int n, bt[20], wt[20], tat[20], awt=0, atat=0, i, j;

    printf("enter total num of processes :");
    scanf("%d", &n);
    printf("enter burst tim
    
    
    
    
    
    e \n");
    for(i=0;i<n;i++)
    {
        printf("P[%d] :", i+1);
        scanf("%d", &bt[i]);
    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
          wt[i]+=bt[j];

    }
    printf("\n PROCESS \t BURST TIME \t WAITING TIME \t TURNAROUND TIME");

    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        awt+=wt[i];
        atat+=tat[i];

        printf("\nP[%d]\t\t%d\t\t\t%d\t\t\t\t%d",i+1, bt[i], wt[i], tat[i]);
    }
    awt/=i;
    atat/=i;

     printf("\n AVERAGE WAITING TIME : %d", awt);
     printf("\n TURNAROUND TIME : %d", atat);

     return 0;
    
}


























//file handling program
/*#include<stdio.h>
#include<string.h>

int main()
{
    FILE *filePointer;
    char datatoberead[50];
    filePointer= fopen("demo.txt", "r");

    if(filePointer==NULL)
    {
        printf("practical os.c file fail to open.");

    }
    else
    {
        printf("the file is now open.\n");

        while(fgets(datatoberead, 50, filePointer)!=NULL)
        {
            printf("%s", datatoberead);

        }
        fclose(filePointer);
        printf("data successfully read from file practical os.c\n");
        printf("the file is now closed");
    }
    return 0;
}*/