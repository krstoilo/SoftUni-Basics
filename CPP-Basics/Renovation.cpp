#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    int height, width, percent;
    cin >> height >> width >> percent;

    double fullArea = height * width * 4.00;

    double noPaint = percent / 100.00 * fullArea;

    double paintArea = ceil(fullArea - noPaint);
    double paintAmount = 0;
    double leftToPaint = ceil(paintArea);
    double paintLeft = 0;

    string command;
    cin >> command;

    while(command != "Tired!"){

        int litres = stoi(command);
        paintAmount = litres;

        leftToPaint -= paintAmount;

        if(leftToPaint <= 0){

        paintLeft = -1.0 * leftToPaint;

            break;
        }

    cin >> command;

    }

    if(leftToPaint > 0){

        cout << leftToPaint << " quadratic m left." << endl;

    } else if(leftToPaint = 0){

        cout << "All walls are painted! Great job, Pesho!" << endl;

    } else {

        cout << "All walls are painted and you have " << paintLeft << " l paint left!" << endl;
    }

    return 0;
}
