month = input()
nights = int(input())

apartment_cost = 0
studio_cost = 0

if month == 'May' or month == 'October':
    if nights <= 7:
        apartment_cost = 65 * nights
        studio_cost =  50 * nights
    elif 7 < nights <= 14:
        apartment_cost = 65 * nights
        studio_cost = 0.95 * (50 * nights)
    elif nights > 14:
        apartment_cost = 0.9 * 65 * nights
        studio_cost = 0.7 * 50 * nights
    else:
        apartment_cost = 65 * nights
        studio_cost = 50 * nights
if month == 'June' or month == 'September':
    if nights > 14:
        apartment_cost = 0.9 * 68.70 * nights
        studio_cost = 0.8 * 75.20 * nights
    else:
        apartment_cost = 68.70 * nights
        studio_cost = 75.20 * nights
if month == 'July' or month == 'August':
    if nights > 14:
        apartment_cost = 0.9 * 77 * nights
        studio_cost = 76 * nights
    else:
        apartment_cost = 77 * nights
        studio_cost = 76 * nights

print(f'Apartment: {apartment_cost:.2f} lv.')
print(f'Studio: {studio_cost:.2f} lv.')