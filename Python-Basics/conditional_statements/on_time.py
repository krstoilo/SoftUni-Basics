hour_exam = int(input())
minutes_exam = int(input())
hour_arrival = int(input())
minutes_arrival = int(input())

exam_conv_minutes = (hour_exam * 60) + minutes_exam
arrival_conv_minutes = (hour_arrival * 60) + minutes_arrival


if exam_conv_minutes < arrival_conv_minutes:
    print('Late')
    minutes_late = arrival_conv_minutes - exam_conv_minutes
    if minutes_late < 60:
        print(f'{minutes_late} minutes after the start')
    elif minutes_late >= 60:
        hours_late = int(minutes_late/60)
        minutes_late -= (hours_late * 60)
        if minutes_late < 10:
            print(f'{hours_late}:0{minutes_late} hours after the start')
        else:
            print(f'{hours_late}:{minutes_late} hours after the start')
elif exam_conv_minutes == arrival_conv_minutes:
    print('On time')
elif arrival_conv_minutes < exam_conv_minutes:
    minutes_early = exam_conv_minutes - arrival_conv_minutes
    if minutes_early <= 30:
        print('On time')
        print(f'{minutes_early} minutes before the start')
    elif 30 < minutes_early < 60:
        print('Early')
        print(f'{minutes_early} minutes before the start')
    elif minutes_early >= 60:
        hour_early = int(minutes_early / 60)
        minutes_early -= (hour_early * 60)
        if minutes_early < 10:
            print(f'{hour_early}:0{minutes_early} hours before the start')
        else:
            print(f'{hour_early}:{minutes_early} hours before the start')
