n = int(input())

for number in range(1111,10000):
    first_digit = number // 1000
    second_digit = number // 100
    second_digit %= 10
    third_digit = number // 10
    third_digit %= 10
    fourth_digit = number % 10

    if first_digit != 0 and second_digit != 0 and third_digit != 0 and fourth_digit != 0:
            if n % first_digit == 0 and n % second_digit == 0 and n % third_digit == 0 and n % fourth_digit == 0:
                print(f'{number}', end=' ')




