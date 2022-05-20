# arr = [1,1,1,1,1,1,1,1,1,1]
arr2 = [1,1,1,1,1,0,1,1,1,1,1,0]

num = int(input("Enter the number of bits: "))
arr = []
for i in range(num):
    bits = int(input("bits: "))
    arr.append(bits)

n = 5
stuff = []
destuff = []
count = 0

# bit stuffing
for i in range(len(arr)):
    if arr[i] == 1:
        count +=1
        stuff.append(arr[i])
    elif arr[i] != 1:
        count = 0
        stuff.append(arr[i])
    if count == n:
        count = 0
        stuff.insert(len(stuff), 0)
print(stuff)

# bit unstuffing
count = n
for i in range(len(arr)):
    if arr2[i] == 1:
        count -= 1
        destuff.append(arr2[i])
    elif arr2[i] != 1:
        count = n
print(destuff)

