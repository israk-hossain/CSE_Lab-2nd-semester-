#include<iostream>
using namespace std;
int reversenumber(int n)
{
    int reversed=0;
    while(n>0)
    {
        reversed=reversed*10+n%10;
        n/=10;
    }
    return reversed;
}
int main()
{
    int num;
    cin>>num;
    cout<<reversenumber(num)<<endl;
}


