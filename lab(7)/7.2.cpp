#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string class_name;
    int roll_number;
    int marks;
public:
    void set_data() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter class: ";
        getline(cin, class_name);
        cout << "Enter roll number: ";
        cin >> roll_number;
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore();
    }

    char calculate_grade() {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }

    void display_info() {
        cout << "Name: " << name << endl;
        cout << "Class: " << class_name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculate_grade() << endl;
    }
};

int Maxi(int a, int b);

int main() {
    Student student;
    student.set_data();
    student.display_info();
    cout << "Maximum Mark: " << Maxi(100, student.marks) << endl;

    return 0;
}

int Maxi(int a, int b) {
    return (a > b) ? a : b;
}
