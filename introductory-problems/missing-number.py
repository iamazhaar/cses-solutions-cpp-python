n = int(input())
nums = list(map(int, input().split()))

seq_sum = n*(n+1)//2
sum = 0
for i in range(len(nums)):
    sum += nums[i]

missing_num = seq_sum - sum
print(missing_num)