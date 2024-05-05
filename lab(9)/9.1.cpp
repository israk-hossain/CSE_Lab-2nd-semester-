#include<iostream>
using namespace std;
class A
{
public:
    int n1;
    void set_A()
    {
        cin>>n1;
    }
};
class B
{
public:
    int n2;
    void set_B()
    {
        cin>>n2;
    }
};
class C : public B , public A
{
public:
    void show_sum()
    {
        cout<<n1+n2<<endl;
    }

};
int main()
{
    C one;
    one.set_A();
    one.set_B();
    one.show_sum();
    return 0;
}
