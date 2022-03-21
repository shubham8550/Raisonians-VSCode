#include<stdio.h>

 int main(){

     int n, bt[10], wt[10], tat[10], avwt=0, avtat=0, i, j;

     printf("Enter total number of processes(maximum 10):");
     scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Process[%d]:",i+1);
        scanf("%d",&bt[i]);
    }

    // first process waiting time is zero
    wt[0]=0;

    for(i=1;i<n;i++){
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }

    printf("\n Process \t Brust Time \t Waiting Time \t TAT");
    for(i=0;i<n;i++){
        tat[i] =bt[i] + wt[i];
        avwt += wt[i];
        avtat += tat[i];
        printf("\n P[%d]\t\t %d\t\t %d\t\t %d", i+1, bt[i], wt[i], tat[i]);
    }

    avwt = avwt / i;
    avtat = avtat / i;
    printf("\n Average Waiting Time:%d", avwt);
    printf("\n Average Turnaround Time:%d", avtat);
    printf("\n");

     return 0;
 }