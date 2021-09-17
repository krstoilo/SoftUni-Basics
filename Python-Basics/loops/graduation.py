student_name = input()
average_grade = 0.0
year = 0

while year < 12:
    grade = float(input())
    if grade >= 4.00:
        year += 1
        average_grade += grade

print(f'{student_name} graduated. Average grade: {average_grade/year:.2f}')

