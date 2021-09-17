length = int(input())
width = int(input())
height = int(input())
filled_vol = float(input())

aquarium_volume = (length * width * height)*0.001
taken_space = aquarium_volume * (filled_vol)*0.01
water_volume = aquarium_volume - taken_space

print(f'{water_volume:.3f}')

