budget = int(input())
beach_towel_price = float(input())
discount = int(input())

umbrella_price = (2/3) * beach_towel_price
flipflops_price = 0.75 * umbrella_price
beach_bag = (1/3) * (beach_towel_price + flipflops_price)

total = beach_towel_price + umbrella_price + flipflops_price + beach_bag
total_after_discount = (100 - discount)/100 * total

if total_after_discount <= budget:
    print(f"Annie's sum is {total_after_discount:.2f} lv. She has {budget - total_after_discount:.2f} lv. left.")
else:
    print(f"Annie's sum is {total_after_discount:.2f} lv. She needs {total_after_discount - budget:.2f} lv. more.")