#include <iostream>

using namespace std;

int main (){

    ///cake = 45BGN; waffle = 5.80BGN; pancake = 3.20 BGN;

    int days, bakers, cakes, waffles, pancakes;

    cin >> days >> bakers >> cakes >> waffles >> pancakes;

    double cakeMoney = 45 * cakes;
    double waffleMoney = 5.80 * waffles;
    double pancakeMoney = 3.20 * pancakes;

    double amount1 = cakeMoney + waffleMoney + pancakeMoney;
    double amountPerDay = amount1 * bakers;
    double fullAmount = amountPerDay * days;
    double charityAmount = fullAmount - (fullAmount * 0.125);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << charityAmount << endl;

    return 0;
}
