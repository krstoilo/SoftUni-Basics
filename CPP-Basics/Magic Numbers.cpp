#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int f = 1; f <=9; f++){
        for(int s = 1; s <=9; s++){
            for(int t = 1; t <=9; t++){
                for(int fo = 1; fo <=9; fo++){
                    for(int fi = 1; fi <=9; fi++){
                        for(int si = 1; si <=9; si++){
                            int value = f * s * t * fo * fi * si;
                            if(value == n){
                                cout << f << s << t << fo << fi << si << " ";
                            }
                        }
                    }
                }
            }
        }
    }


    return 0;
}
