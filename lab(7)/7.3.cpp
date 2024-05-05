#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
private:
    string name;
    int year_of_joining;
    int salary;
    string address;

public:
    void set_info() {
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter year of joining: ";
        cin >> year_of_joining;

        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore();

        cout << "Enter address: ";
        getline(cin, address);
    }

    void display_info() const {
        cout << name << "\t" << year_of_joining << "\t\t" << address << endl;
    }
};

int main() {
    const int num_employees = 3;
    vector<Employee> employees(num_employees);

    cout << "Enter employee details:" << endl;
    for (int i = 0; i < num_employees; ++i) {
        cout << "\nEmployee " << (i + 1) << ":" << endl;
        employees[i].set_info();
    }

    cout << "\nName\tYear of joining\t\tAddress" << endl;
    for (int i = 0; i < num_employees; ++i) {
        employees[i].display_info();
    }

    return 0;
}
