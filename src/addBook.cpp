#include "../headers/common.h"

using namespace std;

void addBook() {
    Book newBook;

    cout << "Enter book title\n>>> ";
    cin.ignore(); // To clear the buffer
    getline(cin, newBook.title);

    cout << "Enter author\n>>> ";
    getline(cin, newBook.author);

    cout << "Enter ISBN\n>>> ";
    cin >> newBook.isbn;

    cout << "Enter publication year\n>>> ";
    cin >> newBook.year;

    // Push the new book to the books vector (assuming we're using a global vector named "books")
    books.push_back(newBook);

    cout << "Book added successfully!\n";
}