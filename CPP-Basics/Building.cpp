#include <iostream>
#include <string>

using namespace std;

int main () {

    ///even floors - O
    ///off floors - A
    ///room names - Type-floor-number
    ///highest floor - L

    int floors, rooms;
    cin >> floors >> rooms;

    for(int i = floors; i > 0; i--){

        string type;
        if(i == floors){
            type = "L";
        } else if(i % 2 == 0){
            type = "O";
        } else {
            type = "A";
        }

        for(int r = 0; r < rooms; r++){

            cout << type << i << r << " ";
        }

        cout << endl;
    }

    return 0;
}
