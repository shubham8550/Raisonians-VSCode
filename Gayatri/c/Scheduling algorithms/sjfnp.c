#include<stdio.h>

int main(){

    int i, n, p[10], min, k=1, btime=0;
    int bt[10],temp,j,at[10],wt[10],tt[10],ta=0,sum=0;
    float wavg=0,tavg=0,tsum=0,wsum=0;

    printf("\nEnter the No. of processes :");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("Process[%d]:",i+1);
        scanf("%d",&bt[i]);

        printf("Arrival of Process[%d]:",i+1);
        scanf("%d",&at[i]);

        p[i]=i+1;
    }

    // sorting process according to there arrival time
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(at[i]<at[j]){
                // process
                temp=p[j];
                p[j]=p[i];
                p[i]=temp;

                // arrival time
                temp=at[j];
                at[j]=at[i];
                at[i]=temp;

                // brust time
                temp=bt[j];
                bt[j]=bt[i];
                bt[i]=temp;
            }
        }
    }

    // Arranging the table according to Burst time, Execution time and Arrival Time 
    //Arrival time <= Execution time
    for(j=0; j<n; j++){
        btime = btime + bt[j];
        min = bt[k];
        for(i=k; i<n; i++){
            if (btime >= at[i] && bt[i] < min){
                // process
                temp = p[k];
                p[k] = p[i];
                p[i] = temp;

                // arrival time
                temp = at[k];
                at[k] = at[i];
                at[i] = temp;

                // brust time
                temp = bt[k];
                bt[k] = bt[i];
                bt[i] = temp;
            }
        }
        k++;
    }

    // first process waiting time is always zero
    wt[0] = 0;

    for(i=1; i<n; i++){
        sum = sum + bt[i-1];
        wt[i] = sum - at[i];
        wsum = wsum + wt[i];
    }

    wavg = (wsum / n);
    for(i=0; i<n; i++){
        ta = ta + bt[i];
        tt[i] = ta - at[i];
        tsum = tsum + tt[i];
    }

    tavg = (tsum / n);

    printf("\n Process\t Burst\t Arrival\t Waiting\t Turn-around" );
    for(i=0; i<n; i++){
        printf("\n p%d\t\t %d\t %d\t\t %d\t\t %d",p[i], bt[i], at[i], wt[i], tt[i]);
    }

    printf("\n Average Waiting Time:%f", wavg);
    printf("\n Average Turnaround Time:%f", tavg);
    printf("\n");

    return 0;
}