#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    string name;
    int id;
    float mark;

public:
    void setData(string n, int i, float m) {
        name = n;
        id = i;
        mark = m;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Mark: " << mark << endl;
    }
};

class Result : public Student {
public:
    void setStudentData() {
        string n;
        int i;
        float m;

        cout << "Enter name: ";
        cin >> n;
        cout << "Enter ID: ";
        cin >> i;
        cout << "Enter mark: ";
        cin >> m;

        setData(n, i, m);
    }

    void displayResult() {
        cout << "Result Information:" << endl;
        cout << "-------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Mark: " << mark << endl;
    }
};

int main() {
    Result studentResult;
    studentResult.setStudentData();
    studentResult.displayResult();

    return 0;
}