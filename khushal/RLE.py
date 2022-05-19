strg = "HHEELLOOBBOOYYSSFROMRLE!!"
frqn = {}
for i in strg:
    if i in frqn:
        frqn[i] +=1
    else:
        frqn[i]=1
print(str(frqn))

