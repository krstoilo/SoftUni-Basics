#include <iostream>
#include <string>

using namespace std;

int main () {

    string team, souvenir;
    int pieces;

    cin >> team >> souvenir >> pieces;

    double cost = 0.0;

    if(team == "Argentina"){

        if(souvenir == "flags"){
            cost = 3.25;
        } else if(souvenir == "caps"){
            cost = 7.20;
        } else if(souvenir == "posters"){
            cost = 5.10;
        } else if(souvenir == "stickers"){
            cost = 1.25;
        } else {
            cout << "Invalid stock!" << endl;
        }

    } else if(team == "Brazil"){

        if(souvenir == "flags"){
            cost = 4.20;
        } else if(souvenir == "caps"){
            cost = 8.50;
        } else if(souvenir == "posters"){
            cost = 5.35;
        } else if(souvenir == "stickers"){
            cost = 1.20;
        } else {
            cout << "Invalid stock!" << endl;
        }

    } else if(team == "Croatia"){

        if(souvenir == "flags"){
            cost = 2.75;
        } else if(souvenir == "caps"){
            cost = 6.90;
        } else if(souvenir == "posters"){
            cost = 4.95;
        } else if(souvenir == "stickers"){
            cost = 1.10;
        } else {
            cout << "Invalid stock!" << endl;
        }

    } else if(team == "Denmark"){

        if(souvenir == "flags"){
            cost = 3.10;
        } else if(souvenir == "caps"){
            cost = 6.50;
        } else if(souvenir == "posters"){
            cost = 4.80;
        } else if(souvenir == "stickers"){
            cost = 0.90;
        } else {
            cout << "Invalid stock!" << endl;
        }

    } else {

        cout << "Invalid country!" << endl;

    }


    double total = pieces * cost;

    cout.setf(ios::fixed);
    cout.precision(2);

    if(cost != 0){
    cout << "Pepi bought " << pieces << " " << souvenir << " of " << team << " for " << total << " lv." << endl;
    }
    return 0;
}
