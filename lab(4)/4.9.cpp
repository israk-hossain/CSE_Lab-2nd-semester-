#include <iostream>
#include<cmath>
using namespace std;
class rectangle{

private:
    double length;
    double width;
public:
    rectangle(double l,double w){
    length=l;
    width=w;
    }
double getarea(){
return length*width;
}




};
int main(){

int l,w;
cin>>l>>w;
rectangle myrectangle(l,w);
cout<<myrectangle.getarea()<<endl;
return 0;
                }
