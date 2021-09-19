#include <iostream>

using namespace std;

int main () {

    double r;
    cin >> r;

    double pi = 3.1415926;

    double circumference = 2 * pi * r;
    double area = pi * (r*r);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << area << endl;
    cout << circumference << endl;

    return 0;
}
