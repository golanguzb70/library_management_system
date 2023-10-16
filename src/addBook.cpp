#include "../headers/common.h"

using namespace std;

void addBook() {
    Book newBook;

    cout << "Enter book title\n>>> ";
    cin.ignore();
    getline(cin, newBook.title);

    cout << "Enter author\n>>> ";
    getline(cin, newBook.author);

    cout << "Enter ISBN\n>>> ";
    cin >> newBook.isbn;

    cout << "Enter publication year\n>>> ";
    cin >> newBook.year;

    books.push_back(newBook);

    cout << "Book added successfully!\n";
}