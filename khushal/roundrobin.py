#implementation of round robin - non preemption
# Process id's
import numpy as np
proc_at = [1, 2, 3]
n = 3

	# Burst time of all processes
burst_time = [3, 4, 3]

	# Time quantum
quantum = 1
#burst time!
newx=np.add(burst_time,proc_at)
print(newx)
waiting_time=np.sum(newx)
avg_wt=waiting_time/n
print(avg_wt)
#waiting_time=newx[0]+newx[1]+newx[2]/n
#print("waiting time",waiting_time)

#turn around time!
#tat=wt+bt