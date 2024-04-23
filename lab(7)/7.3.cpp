#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int year_of_joining;
    int salary;
    string address;
public:
    void set_info() {
        cin >> name >> year_of_joining >> salary;
        cin.ignore();
        getline(cin, address);
    }

    void display_info() {
        cout << name << "\t" << year_of_joining << "\t\t" << address << endl;
    }
};

int main() {
    Employee employees[3];

    for (int i = 0; i < 3; ++i) {
        employees[i].set_info();
    }

    cout << "Name\tYear of joining\t\tAddress" << endl;
    for (int i = 0; i < 3; ++i) {
        employees[i].display_info();
    }

    return 0;
}




