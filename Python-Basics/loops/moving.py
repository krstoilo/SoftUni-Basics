width = int(input())
length = int(input())
height = int(input())

apartment_space = width * length * height

box = input()

while box != 'Done':
    apartment_space -= int(box)
    if apartment_space <= 0:
        break
    box = input()

if box == 'Done':
    print(f'{abs(apartment_space)} Cubic meters left')
else:
    print(f'No more free space! You need {abs(apartment_space)} Cubic meters more.')