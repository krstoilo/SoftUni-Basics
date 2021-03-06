#include <iostream>

using namespace std;

int main () {

    int n;
    cin >> n;

    int evenSum = 0;
    int oddSum = 0;

    for(int i = 0;i < n; i++) {

        int number;
        cin >> number;

        if(i % 2 == 0) {
            evenSum += number;
        } else {
            oddSum += number;
        }

    }

    if(evenSum == oddSum) {

        cout << "Yes\r\nSum = " << evenSum << endl;
    } else {
        cout << "No\r\nDiff = " << abs(evenSum - oddSum) << endl;
    }

    return 0;
}
