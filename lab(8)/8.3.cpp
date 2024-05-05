isea
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    string id;
    int mark;

public:
    Student(string name, string id, int mark) : name(name), id(id), mark(mark) {}

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
    Result(string name, string id, int mark) : Student(name, id, mark) {}

    void printInfo() const {
        cout << "Name: " << getName() << endl;
        cout << "ID: " << getID() << endl;
        cout << "Mark: " << getMark() << endl;
    }
};

int main() {
    string name, id;
    int mark;
    getline(cin, name);
    getline(cin, id);
    cin >> mark;
    Result student(name, id, mark);
    student.printInfo();

    return 0;
}