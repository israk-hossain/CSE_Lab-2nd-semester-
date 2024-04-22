#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch >= 'a' && ch <= 'z')
            cout << ch << " is a small letter." << endl;
        else
            cout << ch << " is a capital letter." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit." << endl;
    } else {
        cout << ch << " is a special symbol." << endl;
    }

    return 0;
}
