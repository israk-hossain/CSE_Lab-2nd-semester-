#include<iostream>
#include<cmath>
using namespace std;
const double pi=3.1416;
double calculatearea(double radius)
{

    return pi*pow(radius,2);
}
int main()
{
    double radius;
    cin>>radius;
    cout<<calculatearea(radius)<<endl;
}
