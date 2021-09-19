#include <iostream>
#include <cmath>

using namespace std;


int main () {

    double recordTime, distance, oneMeterSecs;

    cin >> recordTime >> distance >> oneMeterSecs;

    double timeIvan = oneMeterSecs * distance;

    double resistance = floor(distance / 15) * 12.5;

    double finalTime = timeIvan + resistance;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (finalTime < recordTime) {

        cout << "Yes, he succeeded! The new world record is " << finalTime << " seconds." << endl;
    } else {

        double needed = finalTime - recordTime;

        cout << "No, he failed! He was " << needed << " seconds slower." << endl;
    }
    return 0;
}
