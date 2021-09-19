#include <iostream>
#include <string>

using namespace std;

int main(){

    int budget, n;
    cin >> budget >> n;

    int cost = 0;

    for(int i = 0; i < n; i++){

        string item;
        cin >> item;

    if(item == "hoodie"){

        cost += 30;

    } else if(item == "keychain"){

        cost += 4;

    } else if(item == "T-shirt"){

        cost += 20;

    } else if(item == "flag"){

        cost += 15;

    } else if(item == "sticker"){

        cost += 1;
    }

    }


    if(budget >= cost){

        int left = budget - cost;

        cout << "You bought " << n << " items and left with " << left << " lv." << endl;

    } else if(budget < cost){

        int needed = cost - budget;

        cout << "Not enough money, you need " << needed << " more lv." << endl;

    }

    return 0;
}
