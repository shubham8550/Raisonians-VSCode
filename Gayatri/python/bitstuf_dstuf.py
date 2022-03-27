# Bit Stuffing
def bit_stuf(ar, n):
    stuf = []
    count = 0
    for i in range(len(ar)):
        if ar[i] == 1:
            count += 1
            stuf.append(ar[i])
        elif ar[i] != 1:
            count = 0
            stuf.append(ar[i])
        if count == n:
            count = 0
            stuf.insert(len(stuf), 0)
    
    return stuf

# Bit Destuffing
def bit_dstuf(ar, n):
    dstuf = []
    count = n
    for i in range(len(ar)):
        if ar[i] == 1:
            count -= 1
            dstuf.append(ar[i])
        elif ar[i] != 1:
            count = n
    return dstuf


n = 5

ar = [ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]
bs = bit_stuf(ar, n)
print(bs)

ar2 = [1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1]
bds = bit_dstuf(ar2, n)
print(bds)