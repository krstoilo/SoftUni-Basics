starting_points = int(input())

moves = 0

sector = input()

while starting_points > 0:
    moves += 1
    if sector == 'double ring':
        points = int(input())
        starting_points -= 2 * points
    elif sector == 'triple ring':
        points = int(input())
        starting_points -= 3 * points
    elif sector == 'bullseye':
        break
    else:
        points = int(input())
        starting_points -= points

    sector = input()

if sector == 'bullseye':
    print(f"Congratulations! You won the game with a bullseye in {moves} moves!")

if starting_points == 0:
    print(f"Congratulations! You won the game in {moves} moves!")
elif starting_points < 0:
    print(f"Sorry, you lost. Score difference: {abs(starting_points)}.")