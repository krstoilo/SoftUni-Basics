n = int(input())
l = int(input())

for a in range(1, n):
    for b in range(1, n):
        for d in range(97, l+97):
            for e in range(97, l+97):
                for c in range(1, n+1):
                    if c > a and c > b:
                        print(f'{a}{b}{chr(d)}{chr(e)}{c}', end=' ')