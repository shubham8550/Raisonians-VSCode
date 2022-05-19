#include<stdio.h>
int main()
{
    int bt[20], p[20], wt[20], tat[20], i, j, n, total=0, pos, temp;
    float awt=0, atat=0;
    printf("enter total num of processes :");
    scanf("%d", &n);
    printf("enter burt time");

    for(i=0;i<n;i++)
    {
        printf("P%d", i+1);
        scanf("%d", &bt[i]);
        p[i]=i+1;
    }

    //sorting burst time
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
            pos=j;

        }
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
        wt[i]+=bt[j];
        total+=wt[i];
        //total+=wt[i];
    }
    awt=(float)total/n;
    total=0;

    printf("\n PROCESS \t BURST TIME \t WAITING TIME \t TURNAROUND TIME");

    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        total+=tat[i];

        printf("\nP[%d]\t\t%d\t\t\t%d\t\t\t\t%d",i+1, bt[i], wt[i], tat[i]);

    }
    atat=(float)total/n;
    printf("\nAverage Waiting Time=%.2f", awt);
    printf("\nAverage Turnaround time= %.2f", atat);

    return 0;
}