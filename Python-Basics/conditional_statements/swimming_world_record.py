old_record = float(input())
distance = float(input())
time_for_m = float(input())

resistance_delay = int((distance/15)) * 12.5
ivan_time = (distance * time_for_m) + resistance_delay

if ivan_time < old_record:
    print(f'Yes, he succeeded! The new world record is {ivan_time:.2f} seconds.')
elif ivan_time >= old_record:
    print(f'No, he failed! He was {ivan_time - old_record:.2f} seconds slower.')