#include <iostream>
#include <string>

using namespace std;

int main (){

    string destination;
    getline(cin, destination);

    while(destination != "End"){
        double neededMoney;
        cin >> neededMoney;

        int savedMoney = 0.0;
        while(savedMoney < neededMoney){
            double amount;
            cin >> amount;
            savedMoney += amount;
        }

    cout << "Going to " << destination << "!" << endl;
    cin.ignore();
    getline(cin, destination);
    }

    return 0;
}
