#include "../headers/common.h"


using namespace std;

vector<Book> books;
int main() {
    int choice;

    do {
        cout << "Library Management System" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Remove Book" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. List Books" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice\n>>> ";
        cin >> choice;

        switch(choice) {
            case 1: addBook(); break;
            case 2: removeBook(); break;
            case 3: searchBook(); break;
            case 4: listBooks(); break;
            case 5: cout << "Goodbye!" << endl; break;
            default: cout << "Invalid choice! Try again." << endl;
        }
    } while(choice != 5);

    return 0;
}