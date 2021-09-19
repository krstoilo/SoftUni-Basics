#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main () {

    string name;
    cin >> name;

    double budget;
    cin >> budget;

    int beers, chips;
    cin >> beers >> chips;

    double beersPrice = beers * 1.20;
    double chipsPrice = 0.45 * beersPrice * chips;

    double total = beersPrice + ceil(chipsPrice);

    cout.setf(ios::fixed);
    cout.precision(2);

    if(total <= budget){

    double left = budget - total;

    cout << name << " bought a snack and has " << left << " leva left." << endl;

    } else {

    double more = total - budget;

    cout << name << " needs " << more << " more leva!" << endl;

    }

    return 0;
}
