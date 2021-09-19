#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main () {


    double income, grade, minWage;

    cin >> income >> grade >> minWage;

    double scolarshipE = grade * 25;
    double socialScolarship = 0.35 * minWage;

    if (income < minWage && (grade >= 4.50 && grade < 5.50)) {

        cout << "You get a Social scholarship " << floor(socialScolarship) << " BGN" << endl;

    } else if(income >= minWage && grade >= 5.5) {

        cout << "You get a scholarship for excellent results " << floor(scolarshipE) << " BGN" << endl;

    } else if (income < minWage && grade >= 5.5) {

            if (scolarshipE > socialScolarship) {

                cout << "You get a scholarship for excellent results " << floor(scolarshipE) << " BGN" << endl;

            } else if (scolarshipE < socialScolarship) {

                cout << "You get a Social scholarship " << floor(socialScolarship) << " BGN" << endl;

            } else if (scolarshipE == socialScolarship) {

               cout << "You get a scholarship for excellent results " << floor(scolarshipE) << " BGN" << endl;
            }
    } else {

        cout << "You cannot get a scholarship!" << endl;
    }

    return 0;
}

