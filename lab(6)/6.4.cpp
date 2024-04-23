#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    void get_data() {
        getline(cin, name);
        cin >> age;
        cin.ignore();
    }

    void put_data() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person person;
    person.get_data();
    person.put_data();

    return 0;
}
