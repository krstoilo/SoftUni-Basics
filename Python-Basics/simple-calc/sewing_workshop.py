tables = int(input())
length = float(input())
width = float(input())

tablecloth_m = (length + 2*0.3) * (width + 2*0.3)
tablecloths = tables * tablecloth_m
usd_price_tbl = tablecloths * 7

carre_side = length/2
carre_m = (carre_side * carre_side)
carres = tables * carre_m
usd_price_carres = carres * 9

usd_price = usd_price_tbl + usd_price_carres
bgn_price = usd_price * 1.85

print(f'{usd_price:.2f} USD')
print(f'{bgn_price:.2f} BGN')
