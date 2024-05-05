#include<iostream>
using namespace std;

class Students
{
    string name;
    float marks;
public:
    void get()
    {
        getline(cin,name);
        cin>>marks;
    }
    void show()
    {
        cout<<name<<endl;
        cout<<marks<<endl;
    }
};
int main()
{
    Students s[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter Student "<<i+1 << "th student Info :"<<endl;
        s[i].get();
        cin.ignore();
    }
    for(int i=0;i<3;i++)
    {
        s[i].show();
    }
}
