str = "abrakadabra"
count=0
charac = (input("Enter the character : "))
for n in str:
    if(charac == n):
        count+=1

if(count == 1):
    print(charac)
    exit()

print(count)