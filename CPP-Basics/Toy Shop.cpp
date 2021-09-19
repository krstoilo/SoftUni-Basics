#include <iostream>

using namespace std;

int main () {

    double tripCost;
    int puzzles, dolls, bears, minions, trucks;

    cin >> tripCost >> puzzles >> dolls >> bears >> minions >> trucks;

    double profit = 0;
    profit = profit  + puzzles * 2.60;
    profit = profit + dolls * 3;
    profit = profit + bears * 4.10;
    profit = profit + minions * 8.20;
    profit = profit + trucks * 2;

    int toys = puzzles + dolls + bears + minions + trucks;

    if (toys >= 50) {

        profit = profit * 0.75;
    }

    profit = profit * 0.90;

    if (profit >= tripCost) {

        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Yes! " << profit - tripCost << " lv left." << endl;
    }

    else if (profit < tripCost) {

        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Not enough money! " << tripCost - profit << " lv needed." << endl;
    }
    return 0;
}
