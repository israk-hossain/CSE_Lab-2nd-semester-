#include<iostream>
using namespace std;
void identify(char ch){
if((ch>='a' && ch<='z'))
    cout<<ch<<" Is A Small  Letter"<<endl;
    else if ((ch>='A' && ch<='Z'))
        cout<< "Is A Capital Letter"<<endl;
    else if((ch>='0' && ch<='9'))
        cout<<" Is A Digit"<<endl;
    else
        cout<<"Is A Special Symbol";
}
int main(){



    char character;
    cin>>character;
    identify(character);
    return 0;



}
