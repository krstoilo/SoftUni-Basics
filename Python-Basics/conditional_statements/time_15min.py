hours = int(input())
minutes = int(input())

total_minutes = (hours*60) + minutes + 15

new_hour = int(total_minutes / 60)
new_minutes = total_minutes - (new_hour * 60)

if new_hour == 24:
    new_hour = 0

if new_minutes < 10:
    print(f'{new_hour}:0{new_minutes}')
else:
    print(f'{new_hour}:{new_minutes}')

