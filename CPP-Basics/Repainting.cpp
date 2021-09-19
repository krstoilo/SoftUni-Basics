#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    int height,width,perWithoutPaint;
    cin >> height >> width >> perWithoutPaint;

    int area = height* width * 4;

    double noPaint = 1 - (perWithoutPaint / 100);

    double areaToPaint = area - noPaint;

    cout << areaToPaint << endl;


    return 0;
}
