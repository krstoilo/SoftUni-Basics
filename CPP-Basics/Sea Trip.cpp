#include <iostream>

using namespace std;

int main () {

    double distance = 210;
    int days = 3;
    ///7/100
    ///gas price 1.85


    double gasPrice = 1.85;

    double gasMoney = distance * 2 / 100 * 7 * 1.85;

    double foodMoney, souvenirMoney, hotelMoney;
    cin >> foodMoney >> souvenirMoney >> hotelMoney;

    double dayOneDiscount = 0.9 * hotelMoney;
    double dayTwoDiscount = 0.85 * hotelMoney;
    double dayThreeDiscount = 0.8 * hotelMoney;

    double totalHotel = dayOneDiscount + dayTwoDiscount + dayThreeDiscount;

    double totalMoney = gasMoney + foodMoney * 3 + souvenirMoney * 3 + totalHotel;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Money needed: " << totalMoney << endl;

    return 0;
}
