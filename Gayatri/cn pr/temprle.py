string = input("Enter any string: ")
arr = []

for s in string:
    if arr == []:
        arr.append([s,1])
    elif arr[-1][0] == s:
        arr[-1][1] += 1
    else:
        arr.append([s,1])

rle = "".join(str("".join(str(st) for st in ch)) for ch in arr)
print("Original string: " + string)
print("Rle sting: " + rle)