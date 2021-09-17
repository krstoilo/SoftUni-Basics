import math

income = float(input())
average_grade = float(input())
min_wage = float(input())

social_scholarship = math.floor(0.35 * min_wage)
excellent_result_scholarship = math.floor(average_grade * 25)

if income >= min_wage and 4.5 <= average_grade < 5.5:
    print(f'You cannot get a scholarship!')
elif income < min_wage and average_grade <= 4.5:
    print(f'You cannot get a scholarship!')
elif income < min_wage and 4.5 < average_grade < 5.5:
    print(f'You get a Social scholarship {social_scholarship:.0f} BGN')
elif income < min_wage and average_grade >= 5.5:
    if social_scholarship > excellent_result_scholarship:
        print(f'You get a Social scholarship {social_scholarship:.0f} BGN')
    elif excellent_result_scholarship >= social_scholarship:
        print(f'You get a scholarship for excellent results {excellent_result_scholarship:.0f} BGN')
elif income >= min_wage and average_grade >= 5.5:
    print(f'You get a scholarship for excellent results {excellent_result_scholarship:.0f} BGN')
