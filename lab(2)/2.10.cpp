#include<bits/stdc++.h>
using namespace std;
int main()
{

    int size;
    cin>>size;

    int numbers[size];
for(int i=0;i<size;++i){
    cout<<"Enter Number "<<i+1<<": ";
    cin>>numbers[i];

}
int largest=INT_MIN;
int smallest=INT_MAX;
for(int i=0;i<size;++i){
   if(numbers[i]>largest){
    largest=numbers[i];
   }
   if(numbers[i]<smallest){
    smallest=numbers[i];
   }
}
cout<<"largest"<<largest<<endl;
cout<<"smallest"<<smallest<<endl;
}

