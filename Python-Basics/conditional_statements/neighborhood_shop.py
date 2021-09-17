product = input()
city = input()
qty = float(input())

price = 0

if product == 'coffee':
    if city == 'Sofia':
        price = qty * 0.5
    elif city == 'Plovdiv':
        price = qty * 0.4
    elif city == 'Varna':
        price = qty * 0.45
elif product == 'water':
    if city == 'Sofia':
        price = qty * 0.8
    elif city == 'Plovdiv':
        price = qty * 0.7
    elif city == 'Varna':
        price = qty * 0.7
elif product == 'beer':
    if city == 'Sofia':
        price = qty * 1.2
    elif city == 'Plovdiv':
        price = qty * 1.15
    elif city == 'Varna':
        price = qty * 1.10
elif product == 'sweets':
    if city == 'Sofia':
        price = qty * 1.45
    elif city == 'Plovdiv':
        price = qty * 1.30
    elif city == 'Varna':
        price = qty * 1.35
elif product == 'peanuts':
    if city == 'Sofia':
        price = qty * 1.6
    elif city == 'Plovdiv':
        price = qty * 1.5
    elif city == 'Varna':
        price = qty * 1.55

print(price)
