#include <iostream>
#include <cmath>

using namespace std;

int main () {

    double x1, y1;
    double x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    double sideA = abs(x2 - x1);
    double sideB = abs(y2 - y1);

    double area = sideA * sideB;
    double perimeter = (sideA+sideB)*2;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << area << endl;
    cout << perimeter << endl;

    return 0;
}
