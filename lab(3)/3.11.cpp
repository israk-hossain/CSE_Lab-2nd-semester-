#include<iostream>
#include<string>
using namespace std;
void joinstrings(string str1,string str2,string result)
{
    int i=0,j=0;
    while(str1[i]!='\0')
    {
        result[i]=str1[i];
        i++;
    }
    while(str2[j]!='\0')
    {
        result[i+j]=str2[j];
        j++;
    }
    result[i+j]='\0';
}

int main()
{
    string string1,string2,result;
    cin>>string1>>string2;
    int resultlength=0;
    while(string1[resultlength]!='\0')
    {
        resultlength++;
    }
    while(string2[resultlength]!='\0')
    {
        resultlength++;
    }

    joinstrings(string1,string2,result);
    cout<<result<<endl;
    return 0;
}



