#include<iostream>
using namespace std;
int calculatearea(int length,int width)
{
    return length*width;
}
int main()
{
    int length,width;
    cin>>length>>width;
    cout<<calculatearea(length,width)<<endl;
}
