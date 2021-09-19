#include <iostream>

using namespace std;

int main () {

    double whiskeyPrice, beerL, wineL, rakiaL, whiskeyL;

    cin >> whiskeyPrice >> beerL >> wineL >> rakiaL >> whiskeyL;

    double whiskeyMoney = whiskeyPrice * whiskeyL;
    double rakiaPrice = whiskeyPrice / 2;
    double rakiaMoney = rakiaPrice * rakiaL;
    double winePrice = rakiaPrice - (rakiaPrice * 0.4);
    double wineMoney = winePrice * wineL;
    double beerPrice = rakiaPrice - (rakiaPrice * 0.8);
    double beerMoney = beerPrice * beerL;

    double checkout = whiskeyMoney + rakiaMoney + wineMoney + beerMoney;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << checkout << endl;

    return 0;
}
