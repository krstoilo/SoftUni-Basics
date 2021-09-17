import  math

name = input()
games_played = int(input())
v_games = 0
t_games = 0
b_games = 0
v_points = 0
t_points = 0
b_points = 0


for i in range(1,games_played+1):
    game_type = input()
    points = int(input())
    if game_type == 'volleyball':
        v_points += points + points * 0.07
        v_games += 1
    elif game_type == 'tennis':
        t_points += points + points * 0.05
        t_games += 1
    else:
        b_points += points + points * 0.02
        b_games += 1

volleyball_pass = math.floor(v_points/v_games) >= 75
tennis_pass = math.floor(t_points/t_games) >= 75
badminton_pass = math.floor(b_points/b_games) >= 75

if volleyball_pass and tennis_pass and badminton_pass:
    print(f"Congratulations, {name}! You won the cruise games with {v_points+t_points+b_points:.0f} points.")
else:
    print(f"Sorry, {name}, you lost. Your points are only {v_points+t_points+b_points:.0f}.")