import sys

n = int(input())
min_num = sys.maxsize
counter = 1

while counter <= n:
    num = int(input())
    if num <= min_num:
        min_num = num
    counter += 1

print(min_num)