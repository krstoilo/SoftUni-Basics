trip_price = float(input())
puzzles = int(input())
dolls = int(input())
teddy_bears = int(input())
minions = int(input())
trucks = int(input())

puzzles_sum = puzzles * 2.60
dolls_sum = dolls * 3
teddy_bears_sum = teddy_bears * 4.10
minions_sum = minions * 8.20
trucks_sum = trucks * 2

total = puzzles_sum + dolls_sum + teddy_bears_sum + minions_sum + trucks_sum
toys_number = puzzles + dolls + teddy_bears + minions + trucks

if toys_number >= 50:
    total = total * 0.75

rent_deducted = total * 0.9

if rent_deducted >= trip_price:
    print(f'Yes! {(rent_deducted - trip_price):.2f} lv left.')
else:
    print(f'Not enough money! {(trip_price - rent_deducted):.2f} lv needed.')
