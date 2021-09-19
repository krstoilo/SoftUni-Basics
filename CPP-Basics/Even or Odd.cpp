#include <iostream>

using namespace std;

int main () {

    int number;
    cin >> number;

    int result = number % 2;

    if (result == 0) {

        cout << "even" << endl;
    }

    else {

        cout << "odd" << endl;
    }

    return 0;
}
