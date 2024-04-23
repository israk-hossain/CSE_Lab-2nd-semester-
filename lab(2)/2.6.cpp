
#include<iostream>
#include<cmath>
using namespace std;
int countdigits(int num)
{

    int count=0;
    while(num!=0){
        num/=10;
        count++;
    }
    return count;
}
    int main()
    {
        int num;
        cin>>num;
        cout<<countdigits(num)<<endl;
        return 0;
    }


