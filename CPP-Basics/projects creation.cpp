#include <iostream>
#include <string>

using namespace std;

int main () {

    string name;
    int projects;

    cin >> name >> projects;

    int hours = projects * 3;

    cout << "The architect " << name << " will need " << hours << " hours to complete " << projects << " project/s.";

    return 0;
}
