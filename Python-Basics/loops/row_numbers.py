import sys

n = int(input())

min_num = sys.maxsize
max_num = -sys.maxsize

for i in range(1,n+1):
    number = int(input())
    if number <= min_num:
        min_num = number
    if number >= max_num:
        max_num = number

print(f'Max number: {max_num}')
print(f'Min number: {min_num}')