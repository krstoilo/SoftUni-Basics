#include <iostream>

using namespace std;

int main () {

    double shirtPrice, sumToReach;
    cin >> shirtPrice >> sumToReach;

    double shortsPrice = 0.75 * shirtPrice;
    double socksPrice = 0.20 * shortsPrice;
    double shoesPrice = 2 * (shirtPrice + shortsPrice);

    double kitPrice = (shirtPrice + shortsPrice + socksPrice + shoesPrice) * 0.85;

    cout.setf(ios::fixed);
    cout.precision(2);

    if(kitPrice >= sumToReach){

    cout << "Yes, he will earn the world-cup replica ball!" << endl << "His sum is " << kitPrice << " lv." << endl;

    } else {

    double more = sumToReach - kitPrice;

    cout << "No, he will not earn the world-cup replica ball." << endl << "He needs " << more << " lv. more." << endl;

    }

    return 0;
}
