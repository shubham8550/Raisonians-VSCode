# include <stdio.h>
int main()
{
    int p[12], n, bt[12], wt[12], tat[12], toatl_tat = 0, total_wat = 0, i, j, temp;
    float avg_wt = 0, avg_tat = 0;

    printf("Enter the number of process: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("P%d\t", i+1);
        scanf("%d", &bt[i]);
        p[i] = i+1;
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(bt[j] < bt[i]){
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
        are raam raam jay siya sraas
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

    printf("Proc \t bt \t wt \n");
    for(i=0; i<n; i++){
        printf("P[%d] \t %d \t %d \n", p[i], bt[i], wt[i]);
    }

    printf("Avg_wt = %f\n Abg_tat = %f\n", avg_wt, avg_tat);
}