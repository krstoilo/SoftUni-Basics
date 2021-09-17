n = int(input())

num_count = 0
p1 = 0
p2 = 0
p3 = 0

for i in range(1,n+1):
    num = int(input())
    num_count += 1
    if num % 2 == 0:
        p1 += 1
    if num % 3 == 0:
        p2 += 1
    if num % 4 == 0:
        p3 += 1

print(f'{100*p1/num_count:.2f}%')
print(f'{100*p2/num_count:.2f}%')
print(f'{100*p3/num_count:.2f}%')

