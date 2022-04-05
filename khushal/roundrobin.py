#implementation of round robin - non preemption
# Process id's
import numpy as np
proc = [1, 2, 3]
n = 3

	# Burst time of all processes
burst_time = [3, 4, 3]

	# Time quantum
quantum = 2
newx=np.add(burst_time,proc)
print(newx)
waiting_time=np.sum(newx)
avg_wt=waiting_time/n
print(avg_wt)
#waiting_time=newx[0]+newx[1]+newx[2]/n
#print("waiting time",waiting_time)