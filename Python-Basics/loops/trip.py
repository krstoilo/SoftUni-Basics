destination = input()
balance = 0.0

while destination != 'End':
    price = float(input())
    balance = float(input())
    while balance < price:
        saved_sum = float(input())
        balance += saved_sum
    print(f'Going to {destination}')

    destination = input()
