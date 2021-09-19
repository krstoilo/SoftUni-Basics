#include <iostream>
#include <string>

using namespace std;

int main () {

    string product, town;
    double qty;

    cin >> product >> town >> qty;

    double cost;

    if(town == "Sofia"){
            if (product == "coffee"){

                cost = qty * 0.50;

            } else if (product == "water"){

                cost = qty * 0.80;

            } else if (product == "beer"){

                cost = qty * 1.20;

            } else if (product == "sweets"){

                cost = qty * 1.45;

            } else {

                cost = qty * 1.60;
            }

    } else if (town == "Plovdiv"){

            if (product == "coffee"){

                cost = qty * 0.40;

            } else if (product == "water"){

                cost = qty * 0.70;

            } else if (product == "beer"){

                cost = qty * 1.15;

            } else if (product == "sweets"){

                cost = qty * 1.30;

            } else {

                cost = qty * 1.50;
            }

    } else {

        if (product == "coffee"){

                cost = qty * 0.45;

            } else if (product == "water"){

                cost = qty * 0.70;

            } else if (product == "beer"){

                cost = qty * 1.10;

            } else if (product == "sweets"){

                cost = qty * 1.35;

            } else {

                cost = qty * 1.55;
            }
    }

            cout << cost << endl;

    return 0;
}
