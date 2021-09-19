#include <iostream>
#include <cmath>

using namespace std;

int main () {

    int tables;
    double length, width;
    cin >> tables >> length >> width;

    ///sqm cover fabric costs 7$
    ///sqm top fabric costs 9$

    double areaCover = tables * (length + 2 * 0.3)*(width + 2 * 0.3);
    double sideTop = length/2;
    double areaTop = tables * sideTop * sideTop;

    double priceCoverUSD = areaCover * 7;
    double priceTopUSD = areaTop * 9;


    double priceCoverBGN = priceCoverUSD * 1.85;
    double priceTopBGN = priceTopUSD * 1.85;

    double finalPriceUSD = priceCoverUSD + priceTopUSD;
    double finalPriceBGN = priceCoverBGN + priceTopBGN;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << finalPriceUSD << " USD" << endl;
    cout << finalPriceBGN << " BGN" << endl;

    return 0;
}
