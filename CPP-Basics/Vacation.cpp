#include <iostream>
#include <string>

using namespace std;

int main () {

    double neededMoney;
    cin >> neededMoney;

    double balance;
    cin >> balance;

    int dayCount = 0;
    int spendCount = 0;

    do {

        string action;
        cin >> action;

        double amount;
        cin >> amount;

        if(action == "save") {

            balance += amount;
            spendCount = 0;

        } else if (action == "spend") {

            balance -= amount;
            spendCount ++;
        }

        if (balance < 0) {

            balance = 0;
        }

        dayCount++;
    }

    while(balance < neededMoney && spendCount < 5);

    if(balance >= neededMoney) {

        cout << "You saved the money for " << dayCount << " days." << endl;
    }

    if(spendCount == 5) {

        cout << "You can't save the money." << endl << dayCount << endl;
    }

    return 0;
}
