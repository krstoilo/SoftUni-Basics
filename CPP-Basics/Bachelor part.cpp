#include <iostream>
#include <string>

using namespace std;

int main () {

    double singerPrice;
    cin >> singerPrice;

    string command;
    cin.ignore();
    getline(cin,command);

    double cost = 0;
    int guests = 0;

    while(command != "The restaurant is full"){

        int peopleGroup;

        peopleGroup = stoi(command);

        guests += peopleGroup;


        if(peopleGroup < 5){
            cost += peopleGroup * 100;
        } else if(peopleGroup >= 5){
            cost += peopleGroup * 70;
        }

        getline(cin,command);

    }

    if(cost >= singerPrice){

        double moneyLeft;
        moneyLeft = cost - singerPrice;

        cout << "You have " << guests << " guests and " << moneyLeft << " leva left." << endl;

    } else {

        cout << "You have " << guests << " guests and " << cost << " leva income, but no singer." << endl;
    }

    return 0;
}
