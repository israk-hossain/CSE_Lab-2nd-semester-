#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string id;
    int mark;

public:
    Student(const string& name, const string& id, int mark) : name(name), id(id), mark(mark) {}

    string getName() const {
        return name;
    }

    string getID() const {
        return id;
    }

    int getMark() const {
        return mark;
    }
};

class Result : public Student {
public:
    Result(const string& name, const string& id, int mark) : Student(name, id, mark) {}

    void printInfo() const {
        cout << "Name: " << getName() << endl;
        cout << "ID: " << getID() << endl;
        cout << "Mark: " << getMark() << endl;
    }
};

int main() {
    string name, id;
    int mark;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student ID: ";
    getline(cin, id);

    cout << "Enter student mark: ";
    while (!(cin >> mark) || mark < 0) {
        cout << "Invalid mark. Please enter a non-negative integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    Result student(name, id, mark);
    student.printInfo();

    return 0;
}
