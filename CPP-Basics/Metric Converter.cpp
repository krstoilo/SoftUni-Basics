#include <iostream>
#include <string>

using namespace std;

int main () {

    double value;
    string inType, outType;

    cin >> value >> inType >> outType;

    ///mm into cm

    if (inType == "mm" && outType == "cm") {

        value = value / 10;

    }

    /// mm into m

    else if (inType == "mm" && outType == "m") {

        value = value / 1000;
    }

    /// cm into m

    else if (inType == "cm" && outType == "m") {

        value = value / 100;
    }

    /// cm into mm

    else if (inType == "cm" && outType == "mm") {

        value = value * 10;
    }

    /// m into cm

    else if (inType == "m" && outType == "cm") {

        value = value * 100;
    }

    /// m into mm

    else if (inType == "m" && outType == "mm") {

        value = value * 1000;
    }


    cout.setf(ios::fixed);
    cout.precision(3);

    cout << value << endl;

    return 0;
}
