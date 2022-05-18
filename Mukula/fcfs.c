#include<stdio.h>
int main()
{
    int n,bt[20],wt[20],tat[20],i,j;
    float avtat=0,avwt=0;it
    printf("Enter total no of process");
    scanf("%d",&n);
    printf("\n Enter Burst time of processes\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]",i+1);
        scanf("%d",&bt[i]);
    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
        wt[i]=wt[i]+bt[j];

    }

    printf("\nProcess\tBurst Time\tWaiting Time\tTurn Around Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt=avwt+wt[i];
        avtat=avtat+tat[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);

    }
    avwt=avwt/n;
    avtat=avtat/n;
    printf("\n Average Waiting Time:%f",avwt);
    printf("\n Average Turn Around Time :%f",avtat);
    return 0;
}