n = int(input())

p1 = 0
p2 = 0
p3 = 0
p4 = 0
p5 = 0
num_count = 0

for i in range(1, n+1):
    num = int(input())
    num_count += 1

    if num < 200:
        p1 += 1
    elif 200 <= num <= 399:
        p2 += 1
    elif 400 <= num <= 599:
        p3 += 1
    elif 600 <= num <= 799:
        p4 += 1
    elif num >= 800:
        p5 += 1

print(f'{100*p1/num_count:.2f}%')
print(f'{100*p2/num_count:.2f}%')
print(f'{100*p3/num_count:.2f}%')
print(f'{100*p4/num_count:.2f}%')
print(f'{100*p5/num_count:.2f}%')
