#include<stdio.h>
void main()
{
    int i,j,n,bt[20],wt[20],tat[20];
    float avwt=0, avtat=0;
    printf("Enter the total no. of process");
    scanf("%d",&n);
    printf("Enter the Burst tme of process\n");
    for(i=0,i<n,i++)
    {
      printf("p[%d],i+1");
      scanf("%d,&bt[i]");
    }
      wt[0]=0;
      for(i=1,i<n,i++)
      {
        wt[1]=0;
         for(j=0;j<i;j++)
        {
            wt[i]+=bt[j];
        }
      }
      printf("\nProcess\tBurst time\twaiting time\tturnaround time\t");
      
         for(i=0,i<n,i++)
         {
             tat=bt[i]+wt[i];
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