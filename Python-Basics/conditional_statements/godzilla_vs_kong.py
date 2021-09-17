budget = float(input())
extras = int(input())
costume_price = float(input())

decor = 0.1 * budget
costumes = 0

if extras <= 150:
    costumes = extras * costume_price
elif extras > 150:
    costumes = (extras * costume_price) * 0.9

total_cost = decor + costumes

if total_cost <= budget:
    print(f'Action!')
    print(f'Wingard starts filming with {budget-total_cost:.2f} leva left.')
elif total_cost > budget:
    print(f'Not enough money!')
    print(f'Wingard needs {total_cost - budget:.2f} leva more.')