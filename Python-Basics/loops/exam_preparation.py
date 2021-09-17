failed_marks = int(input())

task = input()
sum_grades = 0.0
passed_tasks = 0
failed_tasks = 0
last_task = ''

while task != 'Enough':
    grade = float(input())
    sum_grades += grade

    if grade > 4.0:
        passed_tasks += 1
    else:
        failed_tasks += 1

    last_task = task

    if failed_tasks == failed_marks:
        print(f'You need a break, {failed_marks} poor grades.')
        break

    task = input()

if failed_tasks != failed_marks:
    print(f'Average score: {sum_grades/(passed_tasks+failed_tasks):.2f}')
    print(f'Number of problems: {passed_tasks+failed_tasks}')
    print(f'Last problem: {last_task}')
