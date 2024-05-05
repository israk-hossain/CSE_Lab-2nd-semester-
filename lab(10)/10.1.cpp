#include<iostream>
using namespace std;
class str_add
{
    string name;
public:
    void get_fn()
    {
        getline(cin,name);
    }
    void print_str()
    {
        cout<<name<<endl;
    }
   friend str_add operator+(str_add  a,str_add b)
    {
        str_add temp;
        temp.name=a.name + " " + b.name;
        return temp;
    }
};
int main()
{
    str_add a,b;
    a.get_fn();
    b.get_fn();
    str_add c=a+b;
    c.print_str();
}
