n = int(input())
permutation = []

for i in range(1, n+1, 2):
    permutation.append(i)
for i in range(2, n+1, 2):
    permutation.append(i)

if (n==4):
    permutation = [3, 1, 4, 2]

flag = True
for i in range(len(permutation)-1):
    if (abs(permutation[i]-permutation[i+1]) == 1):
        print("NO SOLUTION")
        flag = False
        break

if (flag):
    print(*permutation)