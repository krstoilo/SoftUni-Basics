n = int(input())
sum_marks = 0.0
total_sum = 0.0
presentation_count = 0

presentation = input()

while presentation != 'Finish':
    presentation_count += 1
    for i in range(1, n+1):
        mark = float(input())
        sum_marks += mark
        total_sum += mark
    print(f'{presentation} - {sum_marks/n:.2f}')
    sum_marks = 0

    presentation = input()

print(f"Student's final assessment is {total_sum/(n * presentation_count):.2f}.")