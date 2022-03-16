def findWaitingTime(arrival_timem,n,service_time):
    waiting_time=[]
    for i in range(0,n):
        waiting_time.append(service_time[i]-arrival_time[i])
    return waiting_time
def findServiceTime(arrival_timem,n,burst_time):
    service_time=[0]
    for i in range(1,n):
        service_time.append(burst_time[i-1]+service_time[i-1])
    return service_time
def findavgWaitTime(waiting_time,n):
    return sum(waiting_time) /float(n)
if __name__ =="__main__":
    arrival_time = [0,1,2, 3]
    n = len(arrival_time)
    burst_time = [8,4,6,2]

    
    #print(n)
    service_time=findServiceTime(arrival_time,n,burst_time)
    print(service_time)
    waiting_time=findWaitingTime(arrival_time,n,service_time)
    print(waiting_time)    
    print(findavgWaitTime(waiting_time, n))


