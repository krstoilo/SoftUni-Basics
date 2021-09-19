#include <iostream>

using namespace std;

int main () {

    int time1, time2, time3;
    cin >> time1 >> time2 >> time3;


    int sum = time1 + time2 + time3;

    int minutes = sum / 60;
    int seconds = sum % 60;

    if (seconds < 10){

    cout << minutes << ":0" << seconds << endl;
    }

    else {

        cout << minutes << ':' << seconds << endl;
    }

    return 0;
}
