#include<iostream>
using namespace std;

class A
{
public:
    int a;
    void get()
    {
        cin>>a;
    }
    void show()
    {
        cout<<a<<endl;
    }
    friend A operator*(A one, A two)
    {
        A temp;
        temp.a= one.a * two.a;
        return temp;
    }
    friend A operator+(A one, A two)
    {
        A temp;
        temp.a= one.a + two.a;
        return temp;
    }
};
int main()
{
    A ob1,ob2,ob3;
    ob1.get();
    ob2.get();
    ob3.get();
    A ob4=((ob1 * ob2)+ ob3);
    ob4.show();
}
