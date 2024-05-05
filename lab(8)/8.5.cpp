#include <iostream>
#include <string>

using namespace std;

class Parent
{
protected:
    string str;
public:
    Parent(const string& s) : str(s) {}
    virtual void display() const
    {
        cout << "String in base class: " << str << endl;
    }
};

class Child : public Parent
{
public:
    Child(const string& s) : Parent(s) {}

    void display() const override
    {
        cout << "String in child class (uppercase): ";
        for (char c : str)
        {
            cout << uppercase(c);
        }
        cout << endl;
    }
};

int main()
{
    string input;
    getline(cin, input);
    Parent* parentObj = new Child(input);
    parentObj->display();

    delete parentObj;
    return 0;
}
