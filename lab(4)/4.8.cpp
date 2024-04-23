#include <iostream>
#include<cmath>
using namespace std;
class summetion{

private:
    int number1;
    int number2;
public:
    summetion(int num1,int num2){
    number1=num1;
    number2=num2;
    }
int calculatesum(){
return number1+number2;
}




};
int main(){

int num1,num2;
cin>>num1>>num2;
summetion mysum(num1,num2);
cout<<mysum.calculatesum()<<endl;
                }
