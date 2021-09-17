fruit = input()
weekday = input()
qty = float(input())

price = 0

if weekday == "Monday" or weekday == "Tuesday" or weekday == "Wednesday" or weekday == "Thursday" or weekday == "Friday":
    if fruit == "banana":
        price = qty * 2.5
    elif fruit == "apple":
        price = qty * 1.2
    elif fruit == "orange":
        price = qty * 0.85
    elif fruit == "grapefruit":
        price = qty * 1.45
    elif fruit == "kiwi":
        price = qty * 2.7
    elif fruit == "pineapple":
        price = qty * 5.5
    elif fruit == "grapes":
        price = qty * 3.85
    else:
        print("error")
elif weekday == "Saturday" or weekday == "Sunday":
    if fruit == "banana":
        price = qty * 2.7
    elif fruit == "apple":
        price = qty * 1.25
    elif fruit == "orange":
        price = qty * 0.90
    elif fruit == "grapefruit":
        price = qty * 1.60
    elif fruit == "kiwi":
        price = qty * 3.0
    elif fruit == "pineapple":
        price = qty * 5.6
    elif fruit == "grapes":
        price = qty * 4.20
    else:
        print("error")


if price != 0:
    print(f'{price:.2f}')