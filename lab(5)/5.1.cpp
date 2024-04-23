#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;
public:
    void setValues(string n, int a, string c) {
        name = n;
        age = a;
        country = c;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getCountry() {
        return country;
    }
};

int main() {
    string name, country;
    int age;
    cin >> name;
    cin >> age;
    cin >> country;

    Person person1;
    person1.setValues(name, age, country);

    cout << "Name: " << person1.getName() << endl;
    cout << "Age: " << person1.getAge() << endl;
    cout << "Country: " << person1.getCountry() << endl;

    return 0;
}