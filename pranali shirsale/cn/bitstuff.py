def bitStuffing(arr):
	stuffed = []
	count = 0
	for i in range(len(arr)):
		if arr[i] == 2:
			count += 1
			stuffed.append(arr[i])
		elif arr[i] != 2:
			count = 0
			stuffed.append(arr[i])

		if count == 5:
			count = 0
			stuffed.insert(len(stuffed), 0)
		
	return stuffed


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


arr1 = [ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
op = bitStuffing(arr1)
print('Stuffed output : ', op)

op2 = bitDestuffing(op)
print('DeStuffed output : ', op2)

