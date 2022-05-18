#include <stdio.h>

int main()
{
    int i,j,sum=0,n;
    int ar[20],tm[20];
    int disk;
    printf("Enter number of locations\n");
    scanf("%d",&n);
    printf("Enter Position of head\t");
    scanf("%d",&disk);
    printf("Enter elements of disk queue\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        tm[i]=disk-ar[i];
        if(tm[i]<0)
        {
            tm[i]=ar[i]-disk;

        }
        disk=ar[i];
        sum=sum+tm[i];
    }
    printf("cylinders travelled by head");
    for(i=0;i<n;i++)
    {
        printf("\n%d",tm[i]);

    }
    printf("\n Movement of total cylinnders %d\n",sum);
    return 0;
}