import math

income = int(input())
counter = 1
balance = 0

while counter <= income:
    sum = float(input())
    if sum > 0:
        print(f'Increase: {sum}')
        balance += sum
    elif sum < 0:
        print('Invalid operation!')
        break
    counter += 1

print(f'Total: {balance:.2f}')