#include <iostream>
#include <string>

using namespace std;

int main () {

    int minutes;
    cin >> minutes;

    string player;
    cin.ignore();
    getline(cin,player);

    if(minutes == 0){

    cout << "Match has just began!" << endl;

    } else if(minutes < 45){

    cout << "First half time." << endl;

    } else if(minutes >= 45) {

    cout << "Second half time." << endl;

    }


    if(minutes >= 1 && minutes <= 10){

        cout << player << " missed a penalty." << endl;

            if(minutes % 2 == 0){

                cout << player << " was injured after the penalty." << endl;
            }
    } else if(minutes > 10 && minutes <= 35){

        cout << player << " received yellow card." << endl;

            if(minutes % 2 == 1){

                cout << player << " got another yellow card." << endl;
            }

    } else if(minutes > 35 && minutes <= 45){

        cout << player << " SCORED A GOAL !!!" << endl;

    } else if(minutes > 45 && minutes <= 55){

        cout << player << " got a freekick." << endl;

            if(minutes % 2 == 0){

                cout << player << " missed the freekick." << endl;
            }

    } else if(minutes > 55 && minutes <= 80){

        cout << player << " missed a shot from corner." << endl;

            if(minutes % 2 == 1){

                cout << player << " has been changed with another player." << endl;
            }

    } else if(minutes > 80 && minutes <= 90){

        cout << player << " SCORED A GOAL FROM PENALTY !!!" << endl;
    }

    return 0;
}
