#include <iostream>

using namespace std;

int main(){

    int k, l, m, n;
    cin >> k >> l >> m >> n;

    int substitutes = 0;

    for(int a = k; a <= 8; a++){

        for(int b = 9; b >= l; b--){

            for(int c = m; c <= 8; c++){

                for(int d = 9; d >= n; d--){

                    if(a % 2 == 0 && b % 2 == 1 && c % 2 == 0 && d % 2 == 1){

                        if(a == c && b == d){

                            cout << "Cannot change the same player." << endl;

                        } else {

                            substitutes++;

                            cout << a << b << " - " << c << d << endl;

                        }

                        if(substitutes >= 6){
                          return 0;
                        }
                        }
                    }
                }
            }
        }

    return 0;
}
