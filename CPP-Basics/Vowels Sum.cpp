#include <iostream>
#include <string>

using namespace std;

int main () {

    string text;
    getline(cin,text);

    int sum = 0;

    for(int i = 0;i < text.size();i++) {
        char letter = text[i];

        if(letter == 'a'){
            sum += 1;
        } else if(letter == 'e'){
            sum += 2;
        } else if(letter == 'i'){
            sum += 3;
        } else if(letter == 'o'){
            sum += 4;
        } else if(letter == 'u'){
            sum += 5;
        }
    }

    cout << sum << endl;



    return 0;
}
