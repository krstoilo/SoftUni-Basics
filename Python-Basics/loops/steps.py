goal = 10000

steps_count = 0

while steps_count < goal:
    steps_input = input()

    if steps_input == 'Going home':
        steps_input = int(input())
        steps_count += steps_input
        if steps_count < goal:
            print(f'{goal - steps_count} more steps to reach goal.')
        break
    else:
        steps_count += int(steps_input)

if steps_count > goal:
    print('Goal reached! Good job!')
    print(f'{steps_count - goal} steps over the goal!')
elif steps_count == goal:
    print('Goal reached! Good job!')
