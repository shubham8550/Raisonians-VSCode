
# Function for bit de-stuffing
def bitDestuffing(N, arr):

	# Stores the de-stuffed array
	brr = [0 for i in range(30)]

	# Variables to traverse the arrays
	k = 0
	i = 0
	j = 0
	# Stores the count of consecutive ones
	count = 1

	# Loop to traverse in the range [0, N)
	while (i < N):

		# If the current bit is a set bit
		if (arr[i] == 1):

			# Insert into array brr
			brr[j] = arr[i]

			# Loop to check for
			# the next 5 bits
			for k in range(i + 1, k < N and arr[k] == 1 and count < 5,1):
				j += 1
				brr[j] = arr[k]
				count += 1

				# If 5 consecutive set
				# bits are found skip the
				# next bit in arr
				if (count == 5):
					k += 1

				i = k



		# Otherwise insert arr[i] into
		# the array brr
		else:
			brr[j] = arr[i]

		i += 1
		j += 1

	# PrAnswer
	for i in range(0, j):
		print(brr[i],end="")

# Driver Code
if __name__ == '__main__':
	N = 8
	arr = [1, 1, 1, 1, 1, 0, 1]

	bitDestuffing(N, arr)

