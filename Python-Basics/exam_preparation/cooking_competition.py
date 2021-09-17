contesters = int(input())

all_pastries = 0
charity_money = 0

for i in range(1, contesters + 1):
    name = input()
    pastry_type = input()
    cookies_count = 0
    cakes_count = 0
    waffle_count = 0

    while pastry_type != 'Stop baking!':
        pastry_qty = int(input())
        all_pastries += pastry_qty
        if pastry_type == 'cookies':
            cookies_count = pastry_qty
            charity_money += pastry_qty * 1.50
        elif pastry_type == 'cakes':
            cakes_count = pastry_qty
            charity_money += pastry_qty * 7.80
        elif pastry_type == 'waffles':
            waffle_count = pastry_qty
            charity_money += pastry_qty * 2.30

        pastry_type = input()

    print(f"{name} baked {cookies_count} cookies,"
          f" {cakes_count} cakes and {waffle_count} waffles.")

print(f"All bakery sold: {all_pastries}")
print(f"Total sum for charity: {charity_money:.2f} lv.")
