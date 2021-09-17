x1 = int(input())
x2 = int(input())
magic_number = int(input())

combination_count = 0
found = False

for x in range(x1,x2+1):
    for y in range(x1,x2+1):
        combination_count += 1
        sum = x + y
        if sum == magic_number:
            print(f'Combination N:{combination_count} ({x} + {y} = {magic_number})')
            found = True
            break
    if found:
        break

if not found:
    print(f'{combination_count} combinations - neither equals {magic_number}')