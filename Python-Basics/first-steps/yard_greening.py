square_meters = float(input())

full_price = square_meters * 7.61
discount = 0.18 * full_price
real_price = full_price - discount

print(f'The final price is: {real_price:.2f} lv.')
print(f'The discount is: {discount:.2f} lv.')