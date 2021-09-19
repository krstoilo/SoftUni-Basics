#include <iostream>

using namespace std;

int main() {

    int passengers, stops;
    cin >> passengers >> stops;

    int peopleOn = 0;
    int peopleOff = 0;

    for(int i = 1; i <= stops; i++){

        int on, off;
        cin >> off >> on;

        if(i % 2 != 0){

            on += 2;

        }
        if(i % 2 == 0){

            off += 2;
        }

        passengers = passengers + on - off;

    }

    cout << "The final number of passengers is : " << passengers << endl;

    return 0;
}
