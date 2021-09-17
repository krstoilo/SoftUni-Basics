phrase = input()

sum = 0

for i in range(0,len(phrase)):
    if phrase[i] == 'a':
        sum += 1
    elif phrase[i] == 'e':
        sum += 2
    elif phrase[i] == 'i':
        sum += 3
    elif phrase[i] == 'o':
        sum += 4
    elif phrase[i] == 'u':
        sum += 5


print(sum)