#include<stdio.h>

int main(){

    int bt[10], p[10], wt[10], tat[10], i, j, n, total=0, pos, temp;
    float avg_wt, avg_tat;
    printf("Enter number of process:");
    scanf("%d",&n);

    printf("\n Enter Burst Time: \n");
    for(i=0;i<n;i++){
        printf("p%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;         
    }

    //according to brust time processes are schedule so sort the brust time
    for(i=0;i<n;i++){
        pos=i;
        for(j=i+1;j<n;j++){
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

    // first process waiting time is always zero
    wt[0]=0; 

    for(i=1;i<n;i++){
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i] += bt[j];
  
        total += wt[i];
    }
  
    avg_wt=(float)total/n;      
    total=0;

    printf("\n Process \t Brust Time \t Waiting Time \t TAT");

    for(i=0;i<n;i++){
        tat[i] = bt[i] + wt[i];   
        total += tat[i];
        printf("\n p%d\t\t  %d\t\t    %d\t\t %d", p[i], bt[i], wt[i], tat[i]);
    }

    avg_tat=(float)total/n;    
    printf("\n Average Waiting Time:%f", avg_wt);
    printf("\n Average Turnaround Time:%f", avg_tat);
    printf("\n");

    return 0;
}