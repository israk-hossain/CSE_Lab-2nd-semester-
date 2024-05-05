#include <iostream>
#include <string>
using namespace std;

class Base {
protected:
    string inputString;

public:
    void getInput() {
        cout << "Enter a string: ";
        getline(cin, inputString);
    }

    virtual void convertToUpper() {}
};

class Derived : public Base {
public:
    void convertToUpper() override {
        for (char& c : inputString) {
            if (c >= 'a' && c <= 'z') {
                c = c - 'a' + 'A';
            }
        }
    }

    void printUppercase() const {
        cout << "Uppercase string: " << inputString << endl;
    }
};

int main() {
    Derived obj;
    obj.getInput();
    obj.convertToUpper();
    obj.printUppercase();
    return 0;
}
