#include <iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int subtract(int a,int b)
{
    return a-b;
}
int multiply(int a,int b)
{

    return a*b;
}
float divide(int a,int b)
{
    return a/b;
}
int main()
{

    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    cout<<subtract(a,b)<<endl;
    cout<<multiply(a,b)<<endl;
    cout<<divide(a,b)<<endl;
    return 0;



}
