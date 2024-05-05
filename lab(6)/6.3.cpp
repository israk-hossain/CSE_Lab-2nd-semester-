#include <iostream>
#include <string>
#include <limits>
using namespace std;

class OnlineShoppingPlatform {
private:
    string name;
    string description;
    double price;

public:
    void input_product_details() {
        cout << "Enter product name: ";
        getline(cin, name);

        cout << "Enter product description: ";
        getline(cin, description);

        cout << "Enter product price: ";
        while (!(cin >> price) || price < 0) {
            cout << "Invalid input. Please enter a non-negative number for price: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cin.ignore();
    }

    void display_product_details() {
        cout << "Name: " << name << endl;
        cout << "Description: " << description << endl;
        cout << "Price: " << price << endl;
    }
};

class Library {
private:
    string title;
    string author;
    int publication_year;

public:
    void input_book_details() {
        cout << "Enter book title: ";
        getline(cin, title);

        cout << "Enter book author: ";
        getline(cin, author);

        cout << "Enter publication year: ";
        while (!(cin >> publication_year) || publication_year < 0) {
            cout << "Invalid input. Please enter a valid publication year: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cin.ignore();
    }

    void display_book_details() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publication_year << endl;
    }
};

int main() {
    OnlineShoppingPlatform product1;
    OnlineShoppingPlatform product2;

    Library book1;
    Library book2;
    Library book3;

    cout << "Enter details for Product 1:" << endl;
    product1.input_product_details();

    cout << "\nEnter details for Product 2:" << endl;
    product2.input_product_details();

    cout << "\nEnter details for Book 1:" << endl;
    book1.input_book_details();

    cout << "\nEnter details for Book 2:" << endl;
    book2.input_book_details();

    cout << "\nEnter details for Book 3:" << endl;
    book3.input_book_details();

    cout << "\nProduct 1 Details:" << endl;
    product1.display_product_details();

    cout << "\nProduct 2 Details:" << endl;
    product2.display_product_details();

    cout << "\nBook 1 Details:" << endl;
    book1.display_book_details();

    cout << "\nBook 2 Details:" << endl;
    book2.display_book_details();

    cout << "\nBook 3 Details:" << endl;
    book3.display_book_details();

    return 0;
}




