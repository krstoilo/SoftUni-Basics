n1 = int(input())
n2 = int(input())

operation = input()
result = 0

if operation == '+':
    result = n1 + n2
    if result % 2 == 0:
        print(f'{n1} + {n2} = {result} - even')
    else:
        print(f'{n1} + {n2} = {result} - odd')
elif operation == '-':
    result = n1 - n2
    if result % 2 == 0:
        print(f'{n1} - {n2} = {result} - even')
    else:
        print(f'{n1} - {n2} = {result} - odd')
elif operation == '*':
    result = n1 * n2
    if result % 2 == 0:
        print(f'{n1} * {n2} = {result} - even')
    else:
        print(f'{n1} * {n2} = {result} - odd')
elif operation == '/':
    if n2 == 0:
        print(f'Cannot divide {n1} by 0')
    else:
        result = n1 / n2
        print(f'{n1} / {n2} = {result:.2f}')
elif operation == '%':
    if n2 == 0:
        print(f'Cannot divide {n1} by 0')
    else:
        result = n1 % n2
        print(f'{n1} % {n2} = {result}')