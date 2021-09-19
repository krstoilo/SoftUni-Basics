#include <iostream>

using namespace std;

int main () {

    int n;
    cin >> n;

    int counter = 0;
    double balance = 0.0;

    while (counter < n){

        double amount;
        cin >> amount;

            if(amount < 0) {

                cout << "Invalid operation!" << endl;
                break; }

        balance += amount;

        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Increase: " << amount << endl;
        counter ++;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Total: " << balance << endl;

    return 0;
}
