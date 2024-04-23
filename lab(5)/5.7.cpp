#include <iostream>
#include <string>
using namespace std;

class MyClass {
private:
    string first_name;
    string last_name;
public:
    MyClass(string first, string last) {
        first_name = first;
        last_name = last;
    }
    friend void printFullName(MyClass obj);
};

void printFullName(MyClass obj) {
    cout << "Full Name: " << obj.first_name << " " << obj.last_name << endl;
}

int main() {
    string first, last;
    cin >> first;
    cin >> last;
    MyClass obj(first, last);
    printFullName(obj);

    return 0;
}
