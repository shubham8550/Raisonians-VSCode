def bitStuffing(arr):
    stuffed = []
    count = 0
    for i in range(len(arr)):
        if arr[i] == 1:
            count += 1
            stuffed.append(arr[i])
        elif arr[i] != 1:
            count = 0
            stuffed.append(arr[i])

        if count == 5:
            count = 0
            stuffed.insert(len(stuffed), 0)
        
    return stuffed

arr1 = [ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
op = bitStuffing(arr1)
print(op)


def bitDestuffing(arr):
    lenth = len(arr)
    deStuffed = []
    count = 5
    for i in range(lenth):
        if arr[i] == 1:
            count -= 1
            deStuffed.append(arr[i])
        elif arr[i] != 1:
            count = 5
        
    return deStuffed

arr2 = [1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1]
op2 = bitDestuffing(arr2)
print(op2)