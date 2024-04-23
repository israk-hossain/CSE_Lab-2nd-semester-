#include<bits/stdc++.h>
using namespace std;
int main()
{
int num,sum=0;
cin>>num;
int originalnumber=num;
while(num!=0){
    sum+=num%10;
    num/=10;
}
cout<<sum<<endl;
}
