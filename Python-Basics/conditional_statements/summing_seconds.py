first_runner = int(input())
second_runner = int(input())
third_runner = int(input())

total_time = first_runner + second_runner + third_runner

minutes = int(total_time / 60)
seconds = total_time - (minutes*60)

if seconds > 10:
    print(f'{minutes:.0f}:{seconds}')
else:
    print(f'{minutes:.0f}:0{seconds}')