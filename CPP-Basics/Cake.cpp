#include <iostream>
#include <string>

using namespace std;

int main () {

    int w, l;
    cin >> w >> l;

    int cakeSize = w * l;

    string command;
    cin >> command;

    int pieces = 0;

    while(command != "STOP") {

        pieces += stoi(command);
        cakeSize -= pieces;
        pieces = 0;

        if(cakeSize < 0){

            cakeSize = (cakeSize - pieces) * -1;
            cout << "No more cake left! You need " << cakeSize << " pieces more." << endl;
            break;
        }

        cin >> command;

    }

    if(command == "STOP") {

    int left = cakeSize - pieces;

    cout << left << " pieces are left." << endl;

    }

    return 0;
}
