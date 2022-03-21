def ipJobs(n, inp_jobs):
    for i in range(n):
        key = input("Enter Job number\n")
        deadline, profit = input("Enter deadline and profit of process\n").split()
        inp_jobs[key] = [int(deadline), int(profit)]
    return inp_jobs

def sortJobs(jobs):
    return {k: v for k, v in sorted(jobs.items(), key = lambda item: item[1][1], reverse=True)}

def greedy(sorted_jobs):
    op = {}
    tme = 0
    for k, v in sorted_jobs.items():
        if tme < int(v[0]):
           op[k] = v
           tme += 1 
    return op 

n = int(input("Enter number of Jobs : "))
inp = {}    
inp_jobs = ipJobs(n, inp)
sorted_jobs = sortJobs(inp_jobs)
op = greedy(sorted_jobs)
print(op)
