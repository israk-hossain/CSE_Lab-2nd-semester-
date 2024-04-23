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

    return 0;
}
