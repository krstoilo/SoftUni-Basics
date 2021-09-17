movie = input()
student_tickets = 0
standard_tickets = 0
kid_tickets = 0
total_tickets = 0
movie_tickets = 0


while movie != 'Finish':
    places = int(input())
    ticket_type = input()

    while ticket_type != 'End':
        movie_tickets += 1
        total_tickets += 1
        if ticket_type == 'standard':
            standard_tickets += 1
        elif ticket_type == 'student':
            student_tickets += 1
        elif ticket_type == 'kid':
            kid_tickets += 1

        if movie_tickets == places:
            break

        ticket_type = input()

    print(f'{movie} - {movie_tickets/places * 100:.2f}% full.')
    movie_tickets = 0

    movie = input()

print(f'Total tickets: {total_tickets}')
print(f'{student_tickets/total_tickets * 100:.2f}% student tickets')
print(f'{standard_tickets/total_tickets * 100:.2f}% student tickets')
print(f'{kid_tickets/total_tickets * 100:.2f}% kids tickets')