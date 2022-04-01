string  = "abrakadbara"
# string = "aaabbbccaahhaappppaaaiii"

output = []

for s in string:
    if output == []:
        output.append([s,1])
    elif output[-1][0] == s:
        output[-1][1] += 1
    else:
        output.append([s,1])

rle = "".join(str("".join(str(st) for st in ch)) for ch in output)
print("Original string: " + string)
print("RLE string: " + rle)
         