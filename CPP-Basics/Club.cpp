#include <iostream>
#include <string>


using namespace std;

int main(){

    double wantedIncome;
    cin >> wantedIncome;

    string input;

    cin.ignore();
    getline(cin,input);

    double check = 0;

    while(input != "Party!"){

        int coctailPrice = input.size();

        int coctailCount;
        cin >> coctailCount;

        double currentPrice = coctailCount * coctailPrice;


         if((coctailCount * coctailPrice) % 2 != 0){

            currentPrice = 0.75 * currentPrice;
        }

        check += currentPrice;

        if(check >= wantedIncome){
            break;
        }

        cin.ignore();
        getline(cin,input);

    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if(check >= wantedIncome){

        cout << "Target acquired." << endl;

    } else {

        double needed = wantedIncome - check;
        cout << "We need " << needed << " leva more." << endl;

    }

    cout << "Club income - " << check << " leva." << endl;

    return 0;
}
