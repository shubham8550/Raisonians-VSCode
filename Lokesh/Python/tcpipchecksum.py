header = 0b10000000111111100101011111001010
h1 = bin(header)[2:18]
h2 = bin(header)[18:]
sum1 = bin(int(h1, 2) + int(h2, 2))
sum2 = bin(int(sum1, 2) + int(0b0110))
print()