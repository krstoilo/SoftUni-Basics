budget = float(input())
season = input()

destination = ''
place = ''
cost = 0

if budget <= 100:
    destination = 'Somewhere in Bulgaria'
    if season == 'summer':
        place = 'camp'
        cost = 0.3 * budget
    else:
        place = 'hotel'
        cost = 0.7 * budget
elif 100 < budget <= 1000:
    destination = 'Somewhere in Balkans'
    if season == 'summer':
        place = 'camp'
        cost = 0.4 * budget
    else:
        place = 'hotel'
        cost = 0.8 * budget
elif budget > 1000:
    destination = 'Somewhere in Europe'
    place = 'hotel'
    cost = 0.9 * budget


print(f'{destination}')
print(f'{place} - {cost:.2f}')