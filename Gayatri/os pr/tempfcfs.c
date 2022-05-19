# include <stdio.h>
int main(){
    int n, bt[10], wt[10], tat[10], total_wat = 0, toatl_tat = 0, i;
    float avg_wt = 0.0, avg_tat = 0.0;

    printf("Enter number of process: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("P%d: ", i+1);
        scanf("%d", &bt[i]);
    }

    wt[0] = 0;
    for(i=1; i<n; i++){
        wt[i] = bt[i-1] + wt[i-1];
    }

    for(i=0; i<n; i++){
        tat[i] = wt[i] + bt[i];
        total_wat = total_wat + wt[i];
        toatl_tat = toatl_tat + tat[i];
    }
    avg_wt = total_wat/n;
    avg_tat = toatl_tat/n;

    printf("Proc \t BT \t WT \n");
    for(i=0; i<n; i++){
        printf("P%d\t %d\t %d\n", i+1, bt[i], wt[i]);
    }
    printf("Avgtat = %f\n Avgwt = %f\n", avg_tat, avg_wt);
  
    return 0;
}