cake_length = int(input())
cake_width = int(input())

pieces_count = 0
cake_size = cake_length * cake_width

while cake_size > 0:
    pieces = input()
    if pieces == 'STOP':
        print(f'{cake_size} pieces are left.')
        break
    else:
        cake_size -= int(pieces)
        pieces_count += int(pieces)

if cake_size <= 0:
    print(f'No more cake left! You need {pieces_count - (cake_width*cake_length)} pieces more.')
