#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    string sushiType, restaurant;
    int portion;
    char order;

    cin >> sushiType;
    cin.ignore();
    getline(cin, restaurant);
    cin >> portion;
    cin >> order;

    double sushiPrice = 0;

        if(restaurant == "Sushi Zone") {

            if(sushiType == "sashimi"){
                sushiPrice = 4.99;
            } else if(sushiType == "maki"){
                sushiPrice = 5.29;
            } else if(sushiType == "uramaki"){
                sushiPrice = 5.99;
            } else if(sushiType == "temaki"){
                sushiPrice = 4.29;
            }

        } else if(restaurant == "Sushi Time") {

            if(sushiType == "sashimi"){
                sushiPrice = 5.49;
            } else if(sushiType == "maki"){
                sushiPrice = 4.69;
            } else if(sushiType == "uramaki"){
                sushiPrice = 4.49;
            } else if(sushiType == "temaki"){
                sushiPrice = 5.19;
            }

        } else if(restaurant == "Sushi Bar"){

             if(sushiType == "sashimi"){
                sushiPrice = 5.25;
            } else if(sushiType == "maki"){
                sushiPrice = 5.55;
            } else if(sushiType == "uramaki"){
                sushiPrice = 6.25;
            } else if(sushiType == "temaki"){
                sushiPrice = 4.75;
            }

        } else if(restaurant == "Asian Pub"){

            if(sushiType == "sashimi"){
                sushiPrice = 4.50;
            } else if(sushiType == "maki"){
                sushiPrice = 4.80;
            } else if(sushiType == "uramaki"){
                sushiPrice = 5.50;
            } else if(sushiType == "temaki"){
                sushiPrice = 5.50;
            }

        } else {

            cout << restaurant << " is invalid restaurant!" << endl;
        }

        double totalPrice;
        totalPrice = portion * sushiPrice;

        if(order == 'Y') {

            totalPrice += 0.20 * totalPrice;
        } else {

        }

        if(totalPrice != 0){

        cout << "Total price: " << ceil(totalPrice) << " lv." << endl;

        }

    return 0;
}
