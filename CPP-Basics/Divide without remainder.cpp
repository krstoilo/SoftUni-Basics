#include <iostream>

using namespace std;

int main (){

    int n;
    cin >> n;

    double p1 = 0; ///%2=0
    double p2 = 0; ///%3=0
    double p3 = 0; ///%4=0

    for(int i = 0; i < n; i++) {

        int num;
        cin >> num;

        if(num % 2 == 0) {

            p1++;

        } else if(num % 3 == 0) {

            p2++;

        } else if(num % 4 == 0) {

            p3++;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << p1/n*100 << "%" << endl;
    cout << p2/n*100 << "%" << endl;
    cout << p3/n*100 << "%" << endl;

    return 0;
}
