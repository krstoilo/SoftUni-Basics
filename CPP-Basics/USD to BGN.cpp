#include <iostream>

using namespace std;

int main () {

    ///1 USD = 1.79549 BGN

    double usd;
    cin >> usd;

    double bgn = usd * 1.79549;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << bgn << endl;

    return 0;
}
