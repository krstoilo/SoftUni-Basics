#include <iostream>
#include <string>

using namespace std;

int main(){

    ///time on terrain
    ///average length
    ///game with overtime
    ///games with Penalty kicks

    string team;
    int games;

    cin >> team >> games;

    double timeOnTerrain = 0;
    double averageTime = 0.00;

    int overtimeGames = 0;
    int penaltyGames = 0;



    for(int i = 0; i < games; i++){

        int gameTime;
        cin >> gameTime;

        timeOnTerrain += gameTime;

        if(gameTime > 90 && gameTime <= 120){

            overtimeGames++;
        }
        if(gameTime  > 120) {

            penaltyGames++;
        }
    }

    averageTime = timeOnTerrain / games;


    cout << team << " has played " << timeOnTerrain << " minutes.";

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << " Average minutes per game: " << averageTime << endl;

    cout << "Games with penalties: " << penaltyGames << endl;

    cout << "Games with additional time: " << overtimeGames << endl;

    return 0;
}
