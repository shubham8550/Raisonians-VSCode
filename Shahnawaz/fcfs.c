#include<stdio.h>
int main() 
{ 
    int i, j,sum=0,n;
    int arr[20],tm[20];
    int disk;
    printf("Enter number of location\t");
    scanf("%d",&n);
    printf("Enter position of head\t");
    scanf("%d",&disk);
    printf("Enter element of disk queue\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        tm[i]=disk-arr[i];
        if(tm[i]<0)
        {
            tm[i]=arr[i]-disk;
        }
        disk=arr[i];
        sum=sum+tm[i];
    }
    printf("cylinders travelled bt head");
    for(i=0;i<n;i++)
    {
        printf("\n%d",tm[i]);
    }
    printf("\n movement of total cylinders %d",sum);
    return 0;
}