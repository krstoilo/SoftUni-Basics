#include <iostream>
#include <string>

using namespace std;

int main(){

    int participants;
    cin >> participants;

    int totalBakedQty = 0;
    double charityMoney = 0;

    for(int i = 1; i <= participants; i++){

    string name;
    cin >> name;

    double priceCookies = 0;
    double priceCakes = 0;
    double priceWaffles = 0;
    int cookieCount = 0;
    int cakeCount = 0;
    int waffleCount = 0;

    string command;
    cin.ignore();
    getline(cin,command);

    while(command != "Stop baking!"){

    int foodQty;
    cin >> foodQty;

    totalBakedQty += foodQty;

    if(command == "cookies"){
        priceCookies = 1.50 * foodQty;
        cookieCount += foodQty;
        charityMoney += priceCookies;

    } else if(command == "cakes"){
        priceCakes = 7.80 * foodQty;
        cakeCount += foodQty;
        charityMoney += priceCakes;

    } else if(command == "waffles"){
        priceWaffles = 2.30 * foodQty;
        waffleCount += foodQty;
        charityMoney += priceWaffles;

    }

    cin.ignore();
    getline(cin,command);

    }

    cout << name << " baked " << cookieCount << " cookies, " << cakeCount << " cakes and " << waffleCount << " waffles." << endl;

    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "All bakery sold: " << totalBakedQty << endl << "Total sum for charity: " << charityMoney << " lv." << endl;

    return 0;
}
