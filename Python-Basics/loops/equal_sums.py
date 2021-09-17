x = int(input())
y = int(input())

for num in range(x,y+1):
    num_as_str = str(num)
    even_sum = 0
    odd_sum = 0

    for i in range(0, len(num_as_str)):
        digit = int(num_as_str[i])
        if (i + 1) % 2 == 0:
            even_sum += digit
        else:
            odd_sum += digit

    if even_sum == odd_sum:
        print(num, end=' ')
