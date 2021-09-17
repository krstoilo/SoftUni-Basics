import math

year_type = input()
holidays = int(input())
weekends_home = int(input())

times_played = 0

if year_type == 'normal':
    saturday_games = 0.75 * (48 - weekends_home)
    sunday_games = weekends_home
    holiday_games = (2/3) * holidays
    times_played = math.floor(saturday_games + sunday_games + holiday_games)
    print(times_played)
else:
    saturday_games = 0.75 * (48 - weekends_home)
    sunday_games = weekends_home
    holiday_games = (2/3) * holidays
    times_played = (saturday_games + sunday_games + holiday_games)
    times_played += 0.15 * times_played
    print(math.floor(times_played))
