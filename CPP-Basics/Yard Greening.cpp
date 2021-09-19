#include <iostream>

using namespace std;

int main () {

    double sqMts;
    cin >> sqMts;

    ///price per yard sq mt 7.61
    ///discount 18%

    double fullPrice = sqMts * 7.61;
    double discount = fullPrice * 18/100;

    double finalPrice = fullPrice - discount;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "The final price is: " << finalPrice << " lv." << endl;
    cout << "The discount is: " << discount << " lv." << endl;

    return 0;
}
