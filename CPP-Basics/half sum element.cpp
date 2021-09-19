#include <iostream>

using namespace std;

int main()  {

    int n;
    cin >> n;

    int maxNumber = INT_MIN;
    int sum = 0;

    for(int i = 0;i < n;i++){

        int number;
        cin >> number;

        sum += number;

        if(number > maxNumber) {

            maxNumber = number;
        }
    }

    if(sum == maxNumber) {

        cout << "Yes" << endl << "Sum = " << maxNumber << endl;

        sum -= maxNumber;

    } else {


        cout << "No" << endl << "Diff = " << abs(sum - maxNumber) << endl;
    }


}
