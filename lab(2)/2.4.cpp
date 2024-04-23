#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    int num;
    cin>>num;
    double sum=1;

    for(int i=1;i<=num;i++)
    {
        if(i%2==0){
        sum+=i;
        }
    }
    cout<<sum<<endl;
}
