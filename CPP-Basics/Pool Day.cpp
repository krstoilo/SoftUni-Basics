#include <iostream>
#include <string>

using namespace std;

int main(){

    double wantedIncome;
    string input;

    cin >> wantedIncome;
    cin.ignore();
    getline(cin,input);

    int coctailPrice = 0;
    double check = 0;
    int discount = 0;

    cout.setf(ios::fixed);
    cout.precision(2);

    while(input != "Party!"){

        int coctailCount;
        cin >> coctailCount;

        coctailPrice = input.size() * 1.00;

        check += coctailCount * coctailPrice * 1.00;
        discount = check;

         if(discount % 2 == 1){

            check = 0.75 * check;
        }

        if(check >= wantedIncome){

            cout << "Target acquired." << endl;
            break;
        }

        cin.ignore();
        getline(cin,input);

    }

    if(wantedIncome > check){

    double needed = wantedIncome - check;

    cout << "We need " << needed << " leva more." << endl;

    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Club income - " << check << " leva." << endl;

    return 0;
}
