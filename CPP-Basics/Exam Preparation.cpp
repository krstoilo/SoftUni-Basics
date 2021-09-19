#include <iostream>
#include <string>

using namespace std;

int main () {

    int maxFails;
    cin >> maxFails;
    cin.ignore();

    string input;
    getline(cin, input);


    int failCount = 0;
    int sumGrades = 0;
    int countTasks = 0;
    string lastProblem = "";

    while(input != "Enough") {

        string taskName = input;
        int grade;

        cin >> grade;
        cin.ignore();

        sumGrades += grade;
        countTasks ++;

        if(grade <= 4) {

            failCount++;
        }

        if(failCount == maxFails) {

            cout << "You need a break, " << failCount << " poor grades." << endl;
            break;
        }

        lastProblem = taskName;

        getline(cin,input);

    }

    if(input == "Enough") {

        double average = sumGrades * 1.0 / countTasks;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Average score: " << average << endl;
        cout << "Number of problems: " << countTasks << endl;
        cout << "Last problem: " << lastProblem << endl;
    }

    return 0;
}
