#include<stdio.h>
#include<conio.h>

void findWaitingTime(int processes[] , int n , int b_time[] ,int w_time[])
{
        w_time[0] = 0;

        for(int i=1;i<n;i++)
                w_time[i]=b_time[i-1]+w_time[i+1];
}

void findTurnAroundTime(int processes[] , int n , int b_time[] , int w_time[], int t_at[])
{
        for(int i=1;i<n;i++)
                t_at[i] = b_time[i]+ w_time[i];
}

void findavgTime(int processes[] , int n , int b_time[])
{
        int w_time[n], t_at[n], total_w_time = 0, total_t_at = 0;
        findWaitingTime(processes , n ,b_time ,w_time);
        findTurnAroundTime(processes ,n ,b_time ,w_time, t_at);


        for(int i=0 ;i<n ;i++)
        {
                total_w_time = total_w_time + w_time[i];
		total_t_at = total_t_at + t_at[i];
		printf(" %d ",(i+1));
		printf("\t%d ", b_time[i]);
		printf("\t%d",  w_time[i]);
		printf("\t%d\n", t_at[i]);
	}
	        int s=(float)total_w_time / (float)n;
	        int t=(float)total_t_at / (float)n;
	        printf("Average waiting time = %d",s);
	        printf("\n");
	        printf("Average turn around time = %d ",t);
}
int main()
{
        clrscr();
        int processes[] = {4,5,6,7,8};
        int n = sizeof processes / sizeof processes[0];          // size of processes

        printf("Processes is %ld", sizeof processes[0]);

        int b_time[] = {5,10,3,7,2};

        findavgTime(processes ,n ,b_time);
        return 0;
}