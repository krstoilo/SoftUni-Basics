#include <iostream>
#include <string>

using namespace std;

int main () {

    int steps = 0;

    string command;
    getline(cin, command);

    while(command != "Going home") {

    steps += stoi(command);

    if(steps >= 10000) {

        cout << "Goal reached! Good job!" << endl;
        break;
    }

    getline(cin, command);

    }

    if(command == "Going home") {

        int stepsToHome;
        cin >> stepsToHome;
        steps += stepsToHome;

            if(steps >= 10000) {

                cout << "Goal reached! Good job!" << endl;

            } else {

            int remain = 10000 - steps;
            cout << remain << " more steps to reach goal." << endl;

            }
    }

    return 0;
}
