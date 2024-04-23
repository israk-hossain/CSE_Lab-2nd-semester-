#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    double salary;
    string hire_date;

    friend int total_years_of_service(const Employee& emp);

public:
    Employee() {}

    void set_data() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter hire date (YYYY-MM-DD): ";
        cin.ignore();
        getline(cin, hire_date);
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Hire Date: " << hire_date << endl;
    }
};

int total_years_of_service(const Employee& emp) {
    int current_year = 2024;
    int hire_year = stoi(emp.hire_date.substr(0, 4));
    return current_year - hire_year;
}

int main() {
    Employee emp;
    emp.set_data();
    emp.display();
    cout << "Total years of service: " << total_years_of_service(emp) << endl;
    return 0;
}
