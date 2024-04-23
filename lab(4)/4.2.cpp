#include<iostream>
using namespace std;
bool isprime(int num)
{
    if(num<=1)
        return false;
    for(int i=2; i<=num/2; ++i)
    {
        if (num%i==0)
            return false;
    }
    return true;
}
void displayprimebetween(int start,int end)
{

    cout<<"Prime Number Between "<<start<<" And "<<end<<"Are :";
    for(int i=start; i<=end; ++i)
    {
        if(isprime(i))cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{


    int start,end;
    cin>>start>>end;;
    displayprimebetween(start,end);
    return 0;
}

