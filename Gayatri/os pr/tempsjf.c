# include <stdio.h>
int main()
{
    int n, bt[12], wt[12], tat[12], toatl_tat = 0, total_wat = 0, i, pos;
    float avg_wt = 0, avg_tat = 0;

    printf("Enter the number of process: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("P%d\t", i+1);
        scanf("%d", &bt[i]);
    }

    for(i=0; i<n; i++){
        
    }

    wt[0] = 0;
    for(i=1; i<n; i++){
        wt[i] = wt[i-1] + bt[i-1];
    }

    for(i=0; i<n; i++){
        tat[i] = wt[i] + bt[i];
        total_wat = total_wat + wt[i];
        toatl_tat = toatl_tat + tat[i];
    }

    avg_wt = total_wat/n;
    avg_tat = toatl_tat/n;

    // for(i=0; i<n; i++){
    //     printf("bt[%d]\t %d\n", i+1, bt[i]);
    // }
}