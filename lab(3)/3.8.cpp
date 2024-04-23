#include<iostream>
using namespace std;
int calculateroot(int n)
{
    if(n==0)
        return 0;
    else if (n%9==0)
        return 9;
    else
        return n%9;

}
int main()
{
    int num;
    cin>>num;
    cout<<calculateroot(num)<<endl;
    return 0;
}


