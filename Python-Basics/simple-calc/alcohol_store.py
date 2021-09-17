whiskey_price = float(input())
beer_qty = float(input())
wine_qty = float(input())
rakia_qty = float(input())
whiskey_qty = float(input())


whiskey_amount = whiskey_price * whiskey_qty
rakia_amount = (whiskey_price/2) * rakia_qty
wine_amount = (0.6 * (whiskey_price/2)) * wine_qty
beer_amount = (0.2 * (whiskey_price/2)) * beer_qty

total = whiskey_amount + rakia_amount + wine_amount + beer_amount

print(f'{total:.2f}')

