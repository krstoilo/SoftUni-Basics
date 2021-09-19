#include <iostream>
#include <string>


using namespace std;

int main() {

    int tickets;
    cin >> tickets;

    char symbol1 = ' ';
    char symbol2 = ' ';
    char symbol3 = ' ';
    int sym2 = INT_MIN;

    for(int i = 1; i <= tickets; i++){

        string ticketNum;
        cin >> ticketNum;

    if(ticketNum.size() == 4){

        if(ticketNum[0] >= 65 && ticketNum[0] <= 90){

            symbol1 = ticketNum[0];
            symbol2 = ticketNum[1];
            symbol3 = ticketNum[2];

        } else if(ticketNum[0] < 65 || ticketNum[0] > 90){

            symbol1 = ticketNum[3];
            symbol2 = ticketNum[1];
            symbol3 = ticketNum[2];
        }

    } else if(ticketNum.size() == 5 || ticketNum.size() == 6){

            symbol1 = ticketNum[0];
            sym2 = ticketNum[1];
            symbol3 = ' ';

    }

        if(sym2 > INT_MIN){

        cout << "Seat decoded: " << symbol1 << sym2 << endl;

        } else {

        cout << "Seat decoded: " << symbol1 << symbol2 << symbol3 << endl;

        }
    }

    return 0;
}
