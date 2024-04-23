//maximum and minimum
#include<iostream>
using namespace std;
int findmax(int a,int b,int c)
{
    return max(max(a,b),c);
}
int findmin(int a,int b,int c)
{

    return min(min(a,b),c);
}
int main()
{

    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    cout<<"Maximum :"<<findmax(num1,num2,num3)<<endl;
    cout<<"Minimum :"<<findmin(num1,num2,num3)<<endl;
}
