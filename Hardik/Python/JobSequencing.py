job=[
     ["j1",2,60],
     ["j2",1,100],
     ["j3",3,20],
     ["j4",2,40],
     ["j5",1,20],
]

job= sorted(job, key = lambda x: x[2],reverse=True)

output=[]
i=0
for [j,d,p] in job:
    # print(j)
    if(d >= i+1 ):
        output.append([j,d,p])
        i+=1

summ=0
for [a,b,c] in output:
    print(a+" : Deadline ="+str(b)+" : Profit ="+str(c))
    summ+=c

print("Max Profit: "+str(summ))

