#include <iostream>

using namespace std;

int main () {

    int n;
    cin >> n;

    int leftSum = 0;
    int rightSum = 0;

    for(int i = 1;i <= 2*n;i++){

        int number;
        cin >> number;

        if(i > n) {

            leftSum += number;
        } else {
            rightSum += number;
        }
    }

    if(leftSum == rightSum) {
        cout << "Yes, sum = " << leftSum << endl;
    } else {
        cout << "No, diff = " << abs(leftSum - rightSum) << endl;
    }

    return 0;
}
