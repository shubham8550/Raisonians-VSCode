#include <stdio.h>
int main(){
    int at[10], bt[10], p[10], i, smallest, count=0, time, n;
    int avg=0, tt=0, end;
    printf("Enter the number of Processes:\n");
    scanf("%d",&n); 
    
    for(i=0;i<n;i++){
        printf("Enter Arrival Time and Burst Time for Process Process Number %d :",i+1);
        scanf("%d",&at[i]);
        scanf("%d",&bt[i]);
        p[i] = bt[i];
        // printf("%d %d", at[i], bt[i]);
    }

    for(time=0; count!=n; time++){
        smallest = 100;
        for(i=0;i<n;i++){
            if(a[i]<=time && b[i]<b[smallest] && b[i]>0 ){
                smallest=i;
            }
        }
            
            
    }

    
}