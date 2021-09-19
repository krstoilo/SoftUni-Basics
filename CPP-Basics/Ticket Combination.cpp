#include <iostream>

using namespace std;

int main () {

    int n;
    cin >> n;

    for(int i = 0; i > n; i++){

        for(int s = 66; s <= 76; s++){
            for(int sec = 102; sec >= 97; sec--){
                for(int entr = 65; entr <= 67; entr++){
                    for(int row = 1; row <= 10; row++){
                        for(int place = 10; place <= 1; place--){

                            cout << s << sec << entr << row << place << endl;
                        }
                    }
                }
            }

        }


    }








    return 0;
}
