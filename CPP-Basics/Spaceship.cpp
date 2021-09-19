#include <iostream>
#include <cmath>

using namespace std;

int main () {

    double shipWidth, shipLength, shipHeight, astroHeight;
    cin >> shipWidth >> shipLength >> shipHeight >> astroHeight;

    double shipVolume = shipWidth * shipLength * shipHeight;
    double roomVolume = 2 * 2 * (astroHeight + 0.4);

    double astronauts = floor(shipVolume / roomVolume);

    if(astronauts < 3){

        cout <<  "The spacecraft is too small." << endl;
    } else if(astronauts >= 3 && astronauts <= 10){
        cout << "The spacecraft holds " << astronauts << " astronauts." << endl;
    } else if(astronauts > 10){
        cout << "The spacecraft is too big." << endl;
    }

    return 0;
}
