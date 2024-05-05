#include <iostream>
using namespace std;

class Employee {
public:

    Employee(string name, double salary) : name(name), salary(salary) {}


    void work() {
        cout << "Employee " << name << " is working." << endl;
    }

    double getSalary() {
        return salary;
    }

protected:
    string name;
    double salary;
};

class HRManager : public Employee {
public:

    HRManager(string name, double salary) : Employee(name, salary) {}

    void work() {
        cout << "HR Manager " << name << " is managing human resources." << endl;
    }

    void addEmployee(string employeeName, double employeeSalary) {
        cout << "HR Manager " << name << " is adding employee: " << employeeName << " with salary: " << employeeSalary << endl;
    }
};

int main() {

    Employee employee("John", 50000.0);
    cout << "Employee Salary: " << employee.getSalary() << endl;
    employee.work();

    cout << endl;

    HRManager hrManager("Alice", 70000.0);
    cout << "HR Manager Salary: " << hrManager.getSalary() << endl;
    hrManager.work();
    hrManager.addEmployee("Bob", 60000.0);
    return 0;
}
