#include <iostream>
#include <string>

using namespace std;

int main (){

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){

        string ingridient;
        cin >> ingridient;

        bool hasFlour = false;
        bool hasEggs = false;
        bool hasSugar = false;

        while(ingridient != "Bake!" || !hasEggs || !hasFlour || !hasSugar){

        if(ingridient == "flour"){
            hasFlour = true;
        } else if(ingridient == "eggs"){
            hasEggs = true;
        } else if(ingridient == "sugar"){
            hasSugar = true;
        } else if(ingridient == "Bake!") {
            cout << "The batter should contain flour, eggs and sugar!" << endl;
        }

            cin >> ingridient;
        }

    if(hasEggs && hasFlour && hasSugar) {

    cout << "Baking batch number " << i << "..." << endl;

    }

    }

    return 0;
}
