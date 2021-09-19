#include <iostream>

using namespace std;

int main () {

    int dogs;
    int otherAnimals;

    cin >> dogs >> otherAnimals;

    ///dog food price per unit: 2.50
    ///other food price per unit: 4

    double priceDogFood = dogs * 2.50;
    double priceOtherFood = otherAnimals * 4;
    double finalPrice = priceDogFood + priceOtherFood;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << finalPrice << " lv." << endl;

    return 0;
}
