income = float(input())
months = int(input())
personal_spendings = float(input())

income_per_month = income - personal_spendings
total_per_month = income_per_month - (0.3 * income)

saved = total_per_month * months
saved_percent = saved / (income * months) * 100

print(f'She can save {saved_percent:.2f}%')
print(f'{saved:.2f}')
