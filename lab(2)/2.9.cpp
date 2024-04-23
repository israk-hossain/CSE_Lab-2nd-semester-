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
int sum=0;
for(int i=0;i<size;++i){
    sum+=numbers[i];
}
double average=static_cast<double>(sum)/size;
cout<<"Average"<<average<<endl;
}

