vacation_price = float(input())
current_balance = float(input())

times_spending = 0
days = 0


while current_balance < vacation_price:
    action = input()
    action_sum = float(input())
    days += 1
    if action == 'spend':
        if action_sum > current_balance:
            current_balance = 0
        else:
            current_balance -= action_sum
        times_spending += 1
    else:
        current_balance += action_sum
        times_spending = 0

    if times_spending == 5:
        print(f"You can't save the money")
        print(days)
        break


if times_spending != 5:
    print(f'You saved the money for {days} days.')