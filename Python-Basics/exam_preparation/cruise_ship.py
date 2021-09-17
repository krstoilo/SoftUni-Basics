cruise = input()
cabin_type = input()
nights = int(input())

total_cost = 0

if cruise == 'Mediterranean':
    if cabin_type == 'standard cabin':
        total_cost = 4 * nights * 27.50
    elif cabin_type == 'cabin with balcony':
        total_cost = 4 * nights * 30.20
    elif cabin_type == 'apartment':
        total_cost = 4 * nights * 40.50
elif cruise == 'Adriatic':
    if cabin_type == 'standard cabin':
        total_cost = 4 * nights * 22.99
    elif cabin_type == 'cabin with balcony':
        total_cost = 4 * nights * 25.00
    elif cabin_type == 'apartment':
        total_cost = 4 * nights * 34.99
elif cruise == 'Aegean':
    if cabin_type == 'standard cabin':
        total_cost = 4 * nights * 23.00
    elif cabin_type == 'cabin with balcony':
        total_cost = 4 * nights * 26.60
    elif cabin_type == 'apartment':
        total_cost = 4 * nights * 39.80

if nights > 7:
    total_cost -= (total_cost * 0.25)

print(f"Annie's holiday in the {cruise} sea costs {total_cost:.2f} lv.")