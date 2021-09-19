#include <iostream>
#include <string>


using namespace std;

int main () {

    int l, w, h;
    cin >> l >> w >> h;

    int volume = l * w * h;

    while(volume > 0) {

        string boxes;
        cin >> boxes;


            if(boxes == "Done") {
                break;
            }

     volume -= stoi(boxes);

    }

    if(volume < 0){

    cout << "No more free space! You need " << volume * -1 << " Cubic meters more." << endl;

    } else {

    cout << volume << " Cubic meters left." << endl;

    }

    return 0;
}
