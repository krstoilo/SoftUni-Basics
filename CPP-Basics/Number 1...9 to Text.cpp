#include <iostream>
#include <string>

using namespace std;

int main (){

    int number;
    cin >> number;

    string word;

    if (number == 1) {

        word = "one";
    }

    else if (number == 2) {

        word = "two";
    }

    else if (number == 3) {

        word = "three";
    }

    else if (number == 4) {

        word = "four" ;
    }

    else if (number == 5) {

        word = "five" ;
    }

    else if (number == 6) {

        word = "six" ;
    }

    else if (number == 7) {

        word = "seven"  ;
    }

    else if (number == 8) {

        word = "eight";
    }

    else if (number == 9) {

        word = "nine" ;
    }

     else {

        cout << "number too big" << endl;
     }
        cout << word << endl;

    return 0;
}
