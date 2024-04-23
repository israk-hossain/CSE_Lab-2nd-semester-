#include<bits/stdc++.h>
using namespace std;
int main()
{

    int num,sum=0;
    cin>>num;
    for(int i=0;i<=num;++i)
    {

        sum+=i*i;
    }
    cout<<sum<<endl;
}
