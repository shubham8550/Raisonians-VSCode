n = int(input("enter number of process: "))

jobs = {}

for i in range(n):
    process = input("Enter process: ")
    dead, prof = input("Enter deadline and profit of process: ").split()
    jobs[process] = [int(dead), int(prof)]

sort_job = {key : value for key, value in sorted(jobs.items(), key = lambda items: items[1][1], reverse=True)}

tm = 0
grdy = {}
for key, value in sort_job.items():
    if tm < value[0]:
        grdy[key] = value
        tm += 1

print(grdy)