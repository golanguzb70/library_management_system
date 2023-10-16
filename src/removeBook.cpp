#include "../headers/common.h"

using namespace std;

void removeBook() {
    string isbn;
    int index = -1;

    do {
        cout << "\nEnter ISBN of book to remove: ";
        cin >> isbn;
        index = -1;

        for (int i = 0; i < books.size(); i++) {
            if (books[i].isbn == isbn) {
                index = i;
                break;
            }
        }
        
        if (index = -1) {
            cout << "This book is not found. Enter 0 if you want to stop\n>>>";
            cin >> index;
            if (index == 0) {
                index = -1;
                return;
            }
        }
    } while(true);
    
    books.erase(books.begin() + index);

    cout << "Book removed successfully\n";
}