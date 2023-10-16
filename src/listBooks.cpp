#include "../headers/common.h"

using namespace std;

void listBooks() {
    cout << "\nList of Books:\n";
    int order = 1;
    for (const auto &book : books) {
        cout << order << ". " << book.title << ", " << book.author << ", " << book.isbn << ", " << book.year << "\n";
        order++;
    }
}