#include <iostream>
#include <string>

using namespace std;

int main () {

    string favoriteBook;
    getline(cin, favoriteBook);

    int qtyBooks;
    cin >> qtyBooks;
    cin.ignore();

    int bookCount = 0;
    bool isFound = false;

    while(bookCount < qtyBooks) {

        string book;
        getline(cin, book);

        if(book != favoriteBook) {

            bookCount++;

        } else {

            isFound = true;
            break;
        }
    }

    if(isFound != false){

        cout << "You checked " << bookCount << " books and found it." << endl;

    } else {

        cout << "The book you search is not here!" << endl << "You checked " << bookCount << " books." << endl;
    }

    return 0;
}
