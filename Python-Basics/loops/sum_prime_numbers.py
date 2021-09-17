number = input()
prime_sum = 0
non_prime_sum = 0
isPrime = True
isNegative = False

while number != 'stop':
    num_as_int = int(number)
    if num_as_int < 0:
        isNegative = True
    elif num_as_int == 0 or num_as_int == 1:
        isPrime = False
    else:
        for i in range(2, num_as_int):
            if num_as_int % i == 0:
                isPrime = False
                break

    if isNegative:
        print('Number is negative')
    else:
        if isPrime:
            prime_sum += num_as_int
        else:
            non_prime_sum += num_as_int

    number = input()
    isPrime = True
    isNegative = False

print(f'Sum of all prime numbers is: {prime_sum}')
print(f'Sum of all non prime numbers is: {non_prime_sum}')