
#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
// Structure to represent a book
struct Book {
    string title;
    string author;
    string isbn;
    int year;
};

// Global vector to store the books
extern vector<Book> books;

// Function prototypes
void addBook();
void removeBook();
void searchBook();
void listBooks();

#endif // COMMON_H