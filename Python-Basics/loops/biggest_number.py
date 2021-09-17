import sys

n = int(input())
max_num = -sys.maxsize
counter = 1

while counter <= n:
    num = int(input())
    if num >= max_num:
        max_num = num
    counter += 1

print(max_num)