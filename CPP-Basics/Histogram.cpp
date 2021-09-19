#include <iostream>

using namespace std;

int main () {

    int n;
    cin >> n;

    int p1 = 0; /// < 200
    int p2 = 0; /// 200 - 399
    int p3 = 0; /// 400 - 599
    int p4 = 0; /// 600 - 799
    int p5 = 0; /// >= 800

    for(int i = 1; i <= n; i++){

        int num;
        cin >> num;

    if(num < 200) {

        p1++;

    } else if(num >= 200 && num <=399) {

        p2++;

    } else if(num >= 400 && num <=599) {

        p3++;

    } else if(num >= 600 && num <=799) {

        p4++;

    } else if(num >= 800) {

        p5++;
    }

    }

    double p1Per = p1/n;
    double p2Per = p2/n;
    double p3Per = p3/n;
    double p4Per = p4/n;
    double p5Per = p5/n;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << p1Per << "%" << endl;
    cout << p2Per << "%" << endl;
    cout << p3Per << "%" << endl;
    cout << p4Per << "%" << endl;
    cout << p5Per << "%" << endl;

    return 0;
}
