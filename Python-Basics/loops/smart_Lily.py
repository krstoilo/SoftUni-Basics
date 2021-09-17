age = int(input())
washing_machine_price = float(input())
toy_price = int(input())

toys = 0
money = 0

for i in range(1,age+1):
    if i % 2 == 1:
        toys += 1
    else:
        money += ((i/2)*10)
        money -= 1

toy_money = toys * toy_price
money += toy_money

if money >= washing_machine_price:
    print(f'Yes! {money-washing_machine_price:.2f}')
else:
    print(f'No! {washing_machine_price - money:.2f}')


