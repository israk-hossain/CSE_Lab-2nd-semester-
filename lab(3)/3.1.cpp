#include<bits/stdc++.h>
using namespace std;

int add(int a,int b)
{

    return a+b;
}
int subtract (int a,int b)
{
    return a-b;
}
int multiply (int a,int b)
{
    return a*b;
}
void divide(float a,float b)
{
    cout<<a/b;
}
int main()
{

    int num1,num2;

    cout<<"Enter two integer :";
    cin>>num1>>num2;
    cout<<add(num1,num2)<<endl;
    cout<<subtract(num1,num2)<<endl;
    cout<<multiply(num1,num2)<<endl;
    divide(num1,num2);

}
