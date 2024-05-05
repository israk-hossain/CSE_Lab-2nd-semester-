#include<iostream>
#include<cmath>
using namespace std;
int reversenumber(int num)
{
    int reversednumber=0;
    while(num!=0)
    {
        reversednumber=reversednumber*10+num%10;
        num/=10;

    }
    return reversednumber;
}
int main()
{
    int num;
    cin>>num;
    cout<<reversenumber(num)<<endl;
}

