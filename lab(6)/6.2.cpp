
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    string hire_date;
public:
    Employee(string n, double s, string hd) : name(n), salary(s), hire_date(hd) {}

    int calculate_years_of_service(int current_year) {
        int hire_year = stoi(hire_date.substr(0, 4));
        return current_year - hire_year;
    }
};

int main() {
    string employee_name, hire_date;
    double employee_salary;

    cout << "Enter employee name: ";
    getline(cin, employee_name);

    cout << "Enter employee salary: ";
    cin >> employee_salary;
    cout << "Enter employee hire date (YYYY-MM-DD): ";
    cin.ignore();
    getline(cin, hire_date);
    int current_year;
    cout << "Enter the current year: ";
    cin >> current_year;
    Employee employee(employee_name, employee_salary, hire_date);
    int years_of_service = employee.calculate_years_of_service(current_year);
    cout << "Years of service: " << years_of_service << endl;
    return 0;
}
