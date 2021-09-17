campaign_days = int(input())
bakers = int(input())
cakes = int(input())
waffles = int(input())
pancakes = int(input())

cakes_sum = cakes * 45
waffles_sum = waffles * 5.80
pancakes_sum = pancakes * 3.20

total_sum_a_day = (cakes_sum + waffles_sum + pancakes_sum) * bakers
total = total_sum_a_day * campaign_days
product_cost = total * 0.125
charity_amount = total - product_cost

print(f'{charity_amount:.2f}')
