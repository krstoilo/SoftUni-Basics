#include <iostream>
#include <string>

using namespace std;

int main() {

    string name;
    cin >> name;

    double grade;
    int gradeCount = 1;
    int failCount = 0;
    double sum = 0;

    while(gradeCount <= 12){

        cin >> grade;

            if (grade >= 4) {
                sum += grade;
                gradeCount++;

            } else {
                failCount++;

                if (failCount == 2 ) {

                cout << name << " has been excluded at " << gradeCount << " grade" << endl;
                break;
            }
        }

    }

    double average = sum / 12;
    cout.setf(ios::fixed);
    cout.precision(2);

    if(failCount != 2){
    cout << name << " graduated. Average grade: " << average << endl;
    }
    return 0;
}
