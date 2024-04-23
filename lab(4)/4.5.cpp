#include <iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
float subtract(float a,float b)
{
     return a-b;
}
double multiply(double a,double b){

return a*b;
}
float divide(float a,float b){
return a/b;
}
int main(){

int a,b;
cin>>a>>b;
cout<<add(a,b)<<endl;
cout<<subtract(a,b)<<endl;
cout<<multiply(a,b)<<endl;
cout<<divide(a,b)<<endl;
return 0;



}
