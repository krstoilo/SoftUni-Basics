import sys

n = int(input())
sum = 0
max_num = -sys.maxsize

for i in range(1,n+1):
    num = int(input())
    if num > max_num:
        max_num = num
    sum += num

sum -= max_num
if max_num == sum:
    print('Yes')
    print(f'Sum = {sum}')
else:
    print('No')
    print(f'Diff = {abs(sum - max_num)}')

