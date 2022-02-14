#Write a C program to simulate for following non primitive CPU scheduling algorithm to find out turn 
#around time, waiting time for FCFS Scheduling Algorithm.

def findWaitingTime(processes, n, bt, wt):

	wt[0] = 0

	# calculating waiting time
	for i in range(1, n ):
		wt[i] = bt[i - 1] + wt[i - 1]

def findTurnAroundTime(processes, n, bt, wt, tat):

	# calculating turnaround time by adding bt[i] + wt[i]
	for i in range(n):
		tat[i] = bt[i] + wt[i]

def findavgTime( processes, n, bt):

	wt = [0] * n
	tat = [0] * n
	total_wt = 0
	total_tat = 0.0

	# Function to find waiting time of all processes
	findWaitingTime(processes, n, bt, wt)

	# Function to find turn around time for all processes
	findTurnAroundTime(processes, n, bt, wt, tat)

	# Display processes along with all details
	print( "Processes Burst time " + " Waiting time " +	" Turn around time")

	# Calculate total waiting time and total turn around time
	for i in range(n):
	
		total_wt = total_wt + wt[i]
		total_tat = total_tat + tat[i]
		print("\t" + str(i + 1) + "\t\t\t " + str(bt[i]) + "\t\t\t\t" + str(wt[i]) + "\t\t\t\t" + str(tat[i]))

	print( "Average waiting time = "+ str(total_wt / n))
	print("Average turn around time = "+ str(total_tat / n))

if __name__ =="__main__":
	
	# process id's
	processes = [ 1, 2, 3]
	n = len(processes)

	# Burst time of all processes
	burst_time = [10, 19, 8]

	findavgTime(processes, n, burst_time)
