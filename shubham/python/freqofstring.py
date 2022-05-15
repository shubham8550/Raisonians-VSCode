ip="WWWBBBWWBBBBBWW"
op=ip[0]
flag=0
for i,c in enumerate(ip):
    if(c == op[-1]):
        flag+=1
    else:
        op+=str(flag)
        op+=ip[i+1]
        flag=1
    if(i == len(ip)-1):
        op+=str(flag)

print(op)

