#include <iostream>
#include <string>
using namespace std;

class Card {
private:
    string title;
    string author;
    int numCopies;
public:
    void store(string t, string a, int copies) {
        title = t;
        author = a;
        numCopies = copies;
    }

    void display() {
        cout << "Title:" << title << endl;
        cout << "Author:" << author << endl;
        cout << "Number of Copies:" << numCopies << endl;
    }
};

int main() {
    string title, author;
    int numCopies;
    getline(cin, title);
    getline(cin, author);
    cin >> numCopies;
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    Card book1;
    book1.store(title, author, numCopies);

    book1.display();

    return 0;
}
