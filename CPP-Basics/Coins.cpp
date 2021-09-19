#include <iostream>

using namespace std;

int main () {

    double change;
    cin >> change;

    int coins = change * 100;

    int coinCount = 0;

    while(coins > 0) {

        ///2, 1, 50, 20, 10, 5, 2, 1

        if(coins >= 200){

            coins -= 200;
            coinCount ++;

        } else if (coins >= 100){

            coins -= 100;
            coinCount ++;

        } else if (coins >= 50){

            coins -= 50;
            coinCount ++;

        } else if (coins >= 20){

            coins -= 20;
            coinCount ++;

        } else if (coins >= 10){

            coins -= 10;
            coinCount ++;

        } else if (coins >= 5){

            coins -= 5;
            coinCount ++;

        } else if (coins >= 2){

            coins -= 2;
            coinCount ++;

        } else if (coins >= 1){

            coins -= 50;
            coinCount ++;

        }
    }

    cout << coinCount << endl;

    return 0;
}
