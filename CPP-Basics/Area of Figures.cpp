#include <iostream>
#include <string>

using namespace std;

int main () {

    string type;
    cin >> type;
    double area;

    if (type == "square") {

        double side;
        cin >> side;

        area = side * side;

    }
    else if (type == "rectangle") {

        double sideA, sideB;
        cin >> sideA >> sideB;

        area = sideA * sideB;

    }
    else if (type == "circle") {

        double radius;
        cin >> radius;

        area = radius * radius * 3.1415926;

    }

    else if (type == "triangle"){

       double side, height;
       cin >> side >> height;

       area = side * height / 2;

   }

        cout.setf(ios::fixed);
        cout.precision(3);
        cout << area << endl;

    return 0;
}
