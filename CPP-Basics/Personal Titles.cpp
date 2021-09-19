#include <iostream>
#include <string>

using namespace std;

int main () {

    double age;
    char sex;

    cin >> age >> sex;
    string output;

    if(sex == 'f') {

        if (age < 16) {

            output = "Miss";
        } else {
            output = "Ms.";
        }

    } else {

        if (age < 16) {
            output = "Master";
        } else {
            output = "Mr.";
        }
    }

    cout << output << endl;

    return 0;
}
