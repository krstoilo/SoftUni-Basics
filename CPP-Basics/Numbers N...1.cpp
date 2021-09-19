#include <iostream>
#include <cmath>

using namespace std;

int main () {

    int n;
    cin >> n;

    for(int c1 = 0; c1 <= 5; c1++) {
        for(int c2 = 0; c2 <= 5; c2++){
            for(int c3 = 0; c3 <= 5; c3++){
                for(int c4 = 0; c4 <= 5; c4++){
                    for(int c5 = 0; c5 <= 5; c5++){
                        int value = c1 + c2 + c3 + c4 + c5;

                        if(value == n) {
                            cout << c1 + c2 + c3 + c4 + c5 << " " << endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}
