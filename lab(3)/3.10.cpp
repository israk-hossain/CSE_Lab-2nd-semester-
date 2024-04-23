#include<iostream>
using namespace std;
int calculatestringlength(string str)
{
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    return length;
}

int main()
{
   string mystring;
   cin>>mystring;
   int length;
   length=calculatestringlength(mystring);
   cout<<length<<endl;
}



