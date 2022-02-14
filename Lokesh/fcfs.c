// C program for implementation of FCFS scheduling
#include<stdio.h>


void findWaitingTime(int processes[], int n, int bt[], int wt[])
{
	// waiting time for first process is 0
	wt[0] = 0;

	// calculating waiting time
	for (int i = 1; i < n ; i++ )
		wt[i] = bt[i-1] + wt[i-1];

        // wt[1] = bt[0] + wt[0]
}


void findTurnAroundTime( int processes[], int n, int bt[], int wt[], int tat[])
{
  	// calculating turnaround time (completion time of process) by adding bt[i] + wt[i]
	for (int i = 0; i < n ; i++)
		tat[i] = bt[i] + wt[i];
}

void findavgTime( int processes[], int n, int bt[])
{
	int wt[n], tat[n], total_wt = 0, total_tat = 0;

	findWaitingTime(processes, n, bt, wt);

	findTurnAroundTime(processes, n, bt, wt, tat);

	printf("Prss BT\tWT\tTAT\n");

	// Calculate total waiting time and total turn around time
	for (int i=0; i<n; i++)
	{
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		printf(" %d ",(i+1));
		printf("\t%d ", bt[i] );
		printf("\t%d",wt[i] );
		printf("\t%d\n",tat[i] );
	}
	int s=(float)total_wt / (float)n;
	int t=(float)total_tat / (float)n;
	printf("Average waiting time = %d",s);
	printf("\n");
	printf("Average turn around time = %d ",t);
}

int main()
{
	//process id's
	int processes[] = {1, 2, 3};

    // To find total number of processes 
	int n = sizeof processes / sizeof processes[0];

    printf("process = %ld process[0] = %ld \n", sizeof processes, sizeof processes[0]);
	//Burst time of all processes
	int burst_time[] = {10, 5, 8};

	findavgTime(processes, n, burst_time);
	return 0;
}
