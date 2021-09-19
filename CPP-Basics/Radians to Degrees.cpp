#include <iostream>
#include <cmath>

using namespace std;

int main () {

    double rad;
    cin >> rad;

    double pi = 3.1415926;
    double deg = rad*180/pi;

    cout << round(deg) << endl;

    return 0 ;

}
