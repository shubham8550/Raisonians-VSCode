# processes = {'p1':[20, 0],'p2':[8, 1],'p3':[12, 2],'p4':[10, 3]}
processes = {'p1':10,'p2':4,'p3':8, 'p4':6}
quantam = 4

bt = [v for k, v in  processes.items()]
quantam = 4

def findWaitingTime():
    tme = 0
    wt = [0] * 4
    while True:
        done = True
        for i in range(len(wt)):
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

