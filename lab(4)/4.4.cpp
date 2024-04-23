#include <iostream>
using namespace std;
void fibonaccinumber(int n)
{
    int a=0,b=1,nexterm;
    cout<<"Fibonacci Number Up To "<<n<<" Terms :";
    for(int i=0; i<n; ++i)
    {
        cout<<a<<" ";
        nexterm=a+b;
        a=b;
        b=nexterm;
    }
    cout<<endl;

}
int main()
{
    int n;
    cin>>n;
    fibonaccinumber(n);
    return 0;
}
