#include <iostream>

using namespace std;

int main () {

    int length, width, height;
    double percent;

    cin >> length >> width >> height >> percent;

    double volume = length * width * height;

    ///1l = 1dm^3 (1*10^-3)

    double fullLitres = volume * 0.001;

    double realLitres = fullLitres * (1-percent/100);

    cout.setf(ios::fixed);
    cout.precision(3);

    cout << realLitres << endl;

    return 0;
}
