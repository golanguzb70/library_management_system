
#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Book {
    string title;
    string author;
    string isbn;
    int year;
};

extern vector<Book> books;

void addBook();
void removeBook();
void searchBook();
void listBooks();

#endif // COMMON_H