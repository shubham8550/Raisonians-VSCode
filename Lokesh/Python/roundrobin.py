# processes = {'p1':[20, 0],'p2':[8, 1],'p3':[12, 2],'p4':[10, 3]}
processes = {'p1':10,'p2':4,'p3':8, 'p4':6}
quantam = 4

bt = [v for k, v in  processes.items()]
quantam = 4

def findWaitingTime(bt, n, quantam):
    tme = 0
    wt = [0] * n
    rem_bt = [v for v in bt]
    while True:
        done = True
        for i in range(n):
            if (rem_bt[i] > 0) :
                done = False 

                if rem_bt[i] > quantam:
                    tme += quantam
                    rem_bt[i] -= quantam
                else:
                    tme = tme + rem_bt[i]
                    wt[i] = tme - bt[i]
                    rem_bt[i] = 0
        if (done == True):
            break
    return wt 

def findTurnAroundTime(bt, n, wt):	
    tat = [0] * n
    for i in range(n):
        tat[i] = bt[i] + wt[i]
    return tat

def findAvgTime(wt, tat, n):
    avgWt = sum(wt) / len(wt)
    avgTat = sum(tat) / len(tat) 
    print("Average Waiting Time: ", avgWt)
    print("Average Turn around Time: ", avgTat)

wait_time = findWaitingTime(bt, len(bt), quantam)
tat = findTurnAroundTime(bt, len(bt), wait_time)
findAvgTime(wait_time, tat, len(bt))