#include <iostream>

using namespace std;

int main () {

    int n;
    cin >> n;

    int combinationsCount = 0;

    for(int x1 = 0; x1 <=n; x1++){
        for(int x2 = 0; x2 <=n; x2++){
            for(int x3 = 0; x3 <=n; x3++){
                for(int x4 = 0; x4 <=n; x4++){
                    for(int x5 = 0; x5 <=n; x5++){

                            if(x1 + x2 + x3 + x4 + x5 == n){
                                combinationsCount++;
                            }
                    }
                }
            }
        }
    }

    cout << combinationsCount << endl;


    return 0;
}
