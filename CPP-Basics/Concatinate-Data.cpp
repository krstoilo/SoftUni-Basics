#include <iostream>
#include <string>

using namespace std;

int main () {

    ///You are <firstName> <lastName>, a <age>-years old person from <town>.

    string firstName, lastName;
    int age;
    string town;

    cin >> firstName >> lastName >> age >> town;

    cout << "You are " << firstName << " " << lastName << ", a " << age << "-years old person from " << town << "." << endl;


    return 0;
}
