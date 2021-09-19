#include <iostream>

using namespace std;

int main () {

    int n;
    cin >> n;

    int k = 1;

    while(k <= n) {

        cout << k << endl;
        k = 2 * k + 1;
    }

    return 0;
}
