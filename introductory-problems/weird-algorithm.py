n = int(input())
seq = [n]

while (n != 1):
    if (n & 1):
        n = n * 3 + 1
        seq.append(n)
    else:
        n = n // 2
        seq.append(n)

print(*seq)