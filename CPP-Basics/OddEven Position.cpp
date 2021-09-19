#include <iostream>

using namespace std;

int main () {

    int n;
    cin >> n;

    double evenMax = INT_MIN;
    double evenMin = INT_MAX;
    double evenSum = 0;

    double oddMax = INT_MIN;
    double oddMin = INT_MAX;
    double oddSum = 0;

    for(int i = 1;i<=n;i++){

        double number;
        cin >> number;

        if(i % 2 == 0) {

        evenSum += number;

            if(number > evenMax) {

                evenMax = number;
            }

            if(number < evenMin) {

                evenMin = number;
            }



        } else {

        oddSum += number;

            if(number > oddMax) {

                oddMax = number;
            }

            if(number < oddMin) {

                oddMin = number;
            }

        }
    }

    //cout.setf(ios::fixed);
    //cout.precision(2);
    cout << "OddSum=" << oddSum << "," << endl;

        if(oddSum == 0){

            cout << "OddMin=No," << endl;
            cout << "OddMax=No," << endl;

        } else {

            cout << "OddMin=" << oddMin << "," << endl;
            cout << "OddMax=" << oddMax << "," << endl;

        }

    cout << "EvenSum=" << evenSum << "," << endl;

        if(evenSum == 0){

            cout << "EvenMin=No" << "," << endl;
            cout << "EvenMax=No" << "," << endl;

        } else {

            cout << "EvenMin=" << evenMin << "," << endl;
            cout << "EvenMax=" << evenMax << endl;

        }

    return 0;
}
