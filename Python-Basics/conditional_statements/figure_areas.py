from math import pi

figure_type = input()

if figure_type == 'square':
    side = float(input())
    area = side*side
elif figure_type == "rectangle":
    side_A = float(input())
    side_B = float(input())
    area = side_A * side_B
elif figure_type == "circle":
    radius = float(input())
    area = pi * radius * radius
elif figure_type == 'triangle':
    side = float(input())
    height = float(input())
    area = (side*height)/2


print(f'{area:.3f}')