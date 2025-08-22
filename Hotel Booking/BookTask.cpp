#include <iostream>
using namespace std;

class Book {
    string title;
    string author;
    string ISBN;

public:
    // Default constructor
    Book() {
        title = "";
        author = "";
        ISBN = "";
    }

    // Parameterized constructor
    Book(string t, string a, string i) {
        title = t;
        author = a;
        ISBN = i;
    }

    void displayInfo() {
        cout << "Title: " << title
             << " | Author: " << author
             << " | ISBN: " << ISBN << endl;
    }
};

int main() {
    const int MAX_BOOKS = 100;
    Book library[MAX_BOOKS];
    int count = 0; // কতগুলো বই আছে

    int choice;
    while (true) {
        cout << "\n===== Library Menu =====\n";
        cout << "1. Add Book\n";
        cout << "2. Show All Books\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            // Add Book
            if (count >= MAX_BOOKS) {
                cout << "Library is full!\n";
                continue;
            }
            string t, a, i;
            cout << "Enter title: ";
            cin.ignore(); // to avoid getline issue
            getline(cin, t);
            cout << "Enter author: ";
            getline(cin, a);
            cout << "Enter ISBN: ";
            cin >> i;

            library[count] = Book(t, a, i);
            count++;
            cout << "Book added successfully!\n";

        } else if (choice == 2) {
            // Show all books
            if (count == 0) {
                cout << "No books in library!\n";
            } else {
                for (int i = 0; i < count; i++) {
                    library[i].displayInfo();
                }
            }

        } else if (choice == 3) {
            cout << "Exiting...\n";
            break;
        } else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
