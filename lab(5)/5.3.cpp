
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    string address;
    string bloodGroup;
    string dateOfBirth;
    int identificationNumber;
public:
    void contain(string n, string a, string bg, string dob, int id) {
        name = n;
        address = a;
        bloodGroup = bg;
        dateOfBirth = dob;
        identificationNumber = id;
    }

    void display() {
        cout << "Name:" << name << endl;
        cout << "Address:" << address << endl;
        cout << "Blood Group:" << bloodGroup << endl;
        cout << "Date of Birth:" << dateOfBirth << endl;
        cout << "Identification Number:" << identificationNumber << endl;
    }
};

int main() {
    string name, address, bloodGroup, dateOfBirth;
    int identificationNumber;
    getline(cin, name);
    getline(cin, address);
    getline(cin, bloodGroup);
    getline(cin, dateOfBirth);
    cin >> identificationNumber;

    Person person1;
    person1.contain(name, address, bloodGroup, dateOfBirth, identificationNumber);

    person1.display();

    return 0;
}
