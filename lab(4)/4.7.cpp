#include <iostream>
#include<cmath>
using namespace std;
class circle
{
private:
    double radius;
public:
    void setradius(double r){
    radius=r;
}
double computearea()
{
    return 3.1416*pow(radius,2);

}

};
int main()
{


    circle mycircle;
    double r;
    cin>>r;
    cout<<"Enter The Radius";
    cin>>r;
    mycircle.setradius(r);
    cout<<mycircle.computearea()<<endl;

    return 0;





}
