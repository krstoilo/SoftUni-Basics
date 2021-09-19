#include <iostream>
#include <string>

using namespace std;

int main(){

    string player;
    getline(cin,player);

    string bestPlayer;
    int maxGoals = 0;

    while(player != "END"){

        int goals;
        cin >> goals;

        if(goals > maxGoals){

            maxGoals = goals;
            bestPlayer = player;
        }

        if(goals >= 10){

            break;
        }

        cin.ignore();
        getline(cin,player);

    }

    cout << bestPlayer << " is the best player!" << endl;

    if(maxGoals >= 3){

        cout << "He has scored " << maxGoals << " goals and made a hat-trick !!!" << endl;

    } else {

        cout << "He has scored " << maxGoals << " goals." << endl;

    }

    return 0;
}
