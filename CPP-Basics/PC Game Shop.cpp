#include <iostream>
#include <string>

using namespace std;

int main(){

    string command;

    getline(cin,command);

    int points = 0;
    int winnerPoints = 0;
    string winner;

    while(command != "Stop"){

    int n = command.size();

    for(int i = 0; i < n; i++){

        int number;
        cin >> number;

    if(number == char(command[i])) {

        points += 10;
    } else {
        points += 2;
    }

    if(points >= winnerPoints){
        winnerPoints = points;
        winner = command;
        }
    }

    points = 0;
    getline(cin,command);


    }

    cout << "The winner is " << winner << " with " << winnerPoints << " points!" << endl;

    return 0;
}
