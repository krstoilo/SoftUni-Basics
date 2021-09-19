#include <iostream>

using namespace std;

int main () {

    int n;
    cin >> n;

    int k = 0;
    int minNumber = INT_MAX;

    while(k < n) {

        int number;
        cin >> number;

            if(number < minNumber){

                minNumber = number;
            }
        k++;
    }

    cout << minNumber << endl;

    return 0;
}
