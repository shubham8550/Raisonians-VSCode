pseudo_bits = 0b10000000111111100101011111001010

h1 = bin(pseudo_bits)[2:18]
h2 = bin(pseudo_bits)[18:]
bits_sum = bin(int(h1, 2) + int(h2, 2))

temp = bits_sum[2:]
checksum = ""

for i in range(len(temp)):
    if temp[i] == "0":
        checksum += "1"
    else:
        checksum += "0"

rev_sum = bin(int(h1, 2) + int(h2, 2) + int(checksum, 2))

print("Header - " + bin(pseudo_bits) + "\nFirst 16 bits - " + h1 + "\nNext 16 bits - "+ h2 +
"\nBits sum - " + temp + "\nCalculated Checksum - "+ checksum + "\nReceiver side bits sum - " + rev_sum)


