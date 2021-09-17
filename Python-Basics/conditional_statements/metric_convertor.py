number = float(input())
from_m = input()
to_m = input()

if from_m == "mm" and to_m == 'cm':
    number /= 10
elif from_m == "mm" and to_m == "m":
    number /= 1000
elif from_m == "cm" and to_m == "mm":
    number *= 10
elif from_m == "cm" and to_m == "m":
    number /= 100
elif from_m == "m" and to_m == "mm":
    number *= 1000
elif from_m == "m" and to_m == "cm":
    number *= 100

print(f'{number:.3f}')
