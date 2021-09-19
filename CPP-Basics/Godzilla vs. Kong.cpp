#include <iostream>

using namespace std;

int main () {

    double budget, clothes;
    int stuntmen;

    cin >> budget >> stuntmen >> clothes;

    double decor = 0.1 * budget;

    if (stuntmen > 150) {

        clothes = clothes * 0.9;
    }

    double cost = decor + clothes * stuntmen;
    double left, needed;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (cost <= budget) {

        left = budget - cost;

    cout << "Action!" << endl << "Wingard starts filming with " << left << " leva left." << endl;

    } else {

        needed = cost - budget;

    cout << "Not enough money!" << endl << "Wingard needs " << needed << " leva more." << endl;
    }

    return 0;
}
