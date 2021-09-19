#include <iostream>
#include <cmath>

using namespace std;

int main ()    {

    double l, w, a;

    cin >> l >> w >> a;

    double areaHall = w * l;
    double areaWard = a * a;
    double areaBench = 0.1 * areaHall;
    double freeSpace = areaHall - (areaWard + areaBench);
    double freeSpaceInCm = freeSpace * 10000;

    double dancers = freeSpaceInCm / 7040;

    double result = floor(dancers);

    cout << result << endl;

    return 0;
}
