#include <iostream>

using namespace std;

int main() {

    int input;
    cin >> input;

    int position3 = input/100;
    int position31 = input%100;
    int position2 = position31/10;
    int position1 = position31%10;

    ///cout << position3 << " " << position2 << " " << position1 << endl;


    for(int pos1 = 1; pos1 <= position1 ; pos1++){

       for(int pos2 = 1; pos2 <= position2 ; pos2++){

           for(int pos3 = 1; pos3 <= position3 ; pos3++){

               int multiplication;
                multiplication = pos3 * pos2 * pos1;

               cout << pos1 << " * " << pos2 << " * " << pos3 << " = " << multiplication << ";" << endl;
            }
        }
    }

    return 0;
}
