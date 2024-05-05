#include<iostream>
using namespace std;

class myClass
{
public:
    int u,v;
    void get()
    {
        cin>>u>>v;
    }
    void show()
    {
        cout<<"U = "<<u<<endl;
        cout<<"V = "<<v<<endl;
    }
    myClass& operator--()
    {
        --u;
        --v;
        return *this;
    }
    myClass operator--(int)
    {
        myClass temp=*this;
        u--;
        v--;
        return temp;
    }
};

int main()
{
    myClass a;
    a.get();
    //a.show();
    myClass b=--a;
    b.show();
    a.show();
}
