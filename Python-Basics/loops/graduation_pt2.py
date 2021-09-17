student_name = input()
average_grade = 0.0
year = 0
repeat_class = 0

while year < 12:
    grade = float(input())
    if grade >= 4.00:
        year += 1
        average_grade += grade
    else:
        repeat_class += 1
    if repeat_class > 1:
        break

if repeat_class <= 1:
    print(f'{student_name} graduated. Average grade: {average_grade/year:.2f}')
else:
    print(f'{student_name} has been excluded at {year+1} grade')