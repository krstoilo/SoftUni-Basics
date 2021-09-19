#include <iostream>
#include <string>

using namespace std;

int main ()   {

    string town;
    double sales;

    cin >> town >> sales;

    double comission = 0;

    if (town == "Sofia") {

        if (sales >= 0 && sales <= 500) {

            comission = 0.05 * sales;
        }

        else if (sales > 500 && sales <= 1000) {

            comission = 0.07 * sales;
        }

        else if (sales > 1000 && sales <= 10000 ) {

            comission = 0.08 * sales;
        }

        else if (sales > 10000) {

            comission = 0.12 * sales;
        }

    }

    else if (town == "Varna") {

        if (sales >= 0 && sales <= 500) {

            comission = 0.045 * sales;
        }

        else if (sales > 500 && sales <= 1000) {

            comission = 0.075 * sales;
        }

        else if (sales > 1000 && sales <= 10000 ) {

            comission = 0.10 * sales;
        }

        else if (sales > 10000) {

            comission = 0.13 * sales;
        }

    }

    else if (town == "Plovdiv") {

        if (sales >= 0 && sales <= 500) {

            comission = 0.055 * sales;
        }

        else if (sales > 500 && sales <= 1000) {

            comission = 0.08 * sales;
        }

        else if (sales > 1000 && sales <= 10000 ) {

            comission = 0.12 * sales;
        }

        else if (sales > 10000) {

            comission = 0.145 * sales;
        }

    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (comission != 0) {
    cout << comission << endl;
    }

    else {

    cout << "error" << endl;
    }

    return 0;
}
