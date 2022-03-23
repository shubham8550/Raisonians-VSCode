string="aaabbbccaahhaappppaaaiii"

op = []

for c in string:
    if(not op):
        op.append([c,1])
    elif(op[-1][0]==c):
        op[-1][1] += 1
    else:
        op.append([c,1])
        
print(op)
