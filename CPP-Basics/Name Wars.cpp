#include <iostream>
#include <string>

using namespace std;

int main(){

    string name;
    getline(cin, name);

    int maxSum = 0;
    string winner;

    while(name != "STOP"){

        int sum = 0;
        for(int i = 0; i < name.size(); i++){
            int value = name[i];
            sum += value;
        }
    if(sum >= maxSum){
        maxSum = sum;
        winner = name;
    }

    getline(cin, name);

    }

    cout << "Winner is " << winner << " - " << maxSum << "!" << endl;

    return 0;
}
