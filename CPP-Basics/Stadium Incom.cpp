#include <iostream>

using namespace std;

int main () {

    double ticketTo, ticketBack, ticketGame;
    int games, discountPercent;

    cin >> ticketTo >> ticketBack >> ticketGame >> games >> discountPercent;

    double discount = discountPercent / 100;

    double planeTickets = (ticketTo + ticketBack) * discount * 6;

    double gameMoney = games * ticketGame * 6;

    double totalPrice = planeTickets + gameMoney;

    double pricePerFriend = totalPrice / 6;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Total sum: " << totalPrice << " lv." << endl;
    cout << "Each friend has to pay " << pricePerFriend << " lv." << endl;

    return 0;
}
