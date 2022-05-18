#include <stdio.h>

int main()
{
    int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
    printf("Enter total number of processses\n");
    scanf("%d",&n);
    printf("Enter Burst time of processes\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);

    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
        {
            wt[i]+=bt[j];
        }
    }
    printf("\nProcess\tBurst Time\tWaiting Time\t\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];

        printf("\nP[%d]\t%d\t\t\t%d\t\t\t%d",i+1,bt[i],wt[i],tat[i]);
    }
    avwt/=i;
    avtat/=i;
    printf("\nAverage waiting Time:%d",avwt);
    printf("\nAverage Turn Around Time:%d",avtat);
    return 0;
    
}