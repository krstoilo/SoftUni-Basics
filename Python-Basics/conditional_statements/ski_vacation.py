days = int(input())
room = input()
review = input()

cost = 0

if days < 10:
    if room == 'room for one person':
        cost = (days-1) * 18
    elif room == 'apartment':
        cost = 0.7 * ((days-1) * 25)
    elif room == 'president apartment':
        cost = 0.9 * ((days-1) * 35)
elif 10 <= days <= 15:
    if room == 'room for one person':
        cost = (days-1) * 18
    elif room == 'apartment':
        cost = 0.65 * ((days-1) * 25)
    elif room == 'president apartment':
        cost = 0.85 * ((days-1) * 35)
elif days > 15:
    if room == 'room for one person':
        cost = (days-1) * 18
    elif room == 'apartment':
        cost = 0.5 * ((days-1) * 25)
    elif room == 'president apartment':
        cost = 0.8 * ((days-1) * 35)

if review == 'positive':
    cost += (cost * 0.25)
else:
    cost -= (cost * 0.10)

print(f'{cost:.2f}')