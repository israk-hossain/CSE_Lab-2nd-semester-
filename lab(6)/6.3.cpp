#include <iostream>
#include <string>
using namespace std;

class OnlineShoppingPlatform {
public:
    string name;
    string description;
    double price;

    void input_product_details() {
        getline(cin, name);
        getline(cin, description);
        cin >> price;
        cin.ignore();
    }
};

class Library {
public:
    string title;
    string author;
    int publication_year;

    void input_book_details() {
        getline(cin, title);
        getline(cin, author);
        cin >> publication_year;
        cin.ignore();
    }
};

OnlineShoppingPlatform get_product_details() {
    OnlineShoppingPlatform product;
    getline(cin, product.name);
    getline(cin, product.description);
    cin >> product.price;
    cin.ignore();
    return product;
}

Library get_book_details() {
    Library book;
    getline(cin, book.title);
    getline(cin, book.author);
    cin >> book.publication_year;
    cin.ignore();
    return book;
}

int main() {
    OnlineShoppingPlatform product1 = get_product_details();
    OnlineShoppingPlatform product2 = get_product_details();

    Library book1 = get_book_details();
    Library book2 = get_book_details();
    Library book3 = get_book_details();

    cout << "Product 1 Details:" << endl;
    cout << "Name: " << product1.name << endl;
    cout << "Description: " << product1.description << endl;
    cout << "Price: " << product1.price << endl;

    cout << "\nProduct 2 Details:" << endl;
    cout << "Name: " << product2.name << endl;
    cout << "Description: " << product2.description << endl;
    cout << "Price: " << product2.price << endl;

    cout << "\nBook 1 Details:" << endl;
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Publication Year: " << book1.publication_year << endl;

    cout << "\nBook 2 Details:" << endl;
    cout << "Title: " << book2.title << endl;
    cout << "Author: " << book2.author << endl;
    cout << "Publication Year: " << book2.publication_year << endl;

    cout << "\nBook 3 Details:" << endl;
    cout << "Title: " << book3.title << endl;
    cout << "Author: " << book3.author << endl;
    cout << "Publication Year: " << book3.publication_year << endl;

    return 0;
}
