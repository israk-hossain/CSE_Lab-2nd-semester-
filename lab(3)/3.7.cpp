#include<iostream>
using namespace std;
int sumofdigits(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int num;
    cin>>num;
    cout<<sumofdigits(num)<<endl;
}


