#include "../headers/common.h"

using namespace std;


void searchBook() {
    string searchTerm;
    cout << "\nEnter title/author/ISBN to search: ";
    cin.ignore();
    getline(cin, searchTerm);
    bool found = false;
    for (const auto &book : books) {
        if (book.title == searchTerm || book.author == searchTerm || book.isbn == searchTerm) {
            found = true;
            cout << "\nFound: " << book.title << ", " << book.author << ", " << book.isbn << ", " << book.year << "\n";
        }
    }

    if (!found) {
        cout << "\nData is not found, try again\n";
    }
}