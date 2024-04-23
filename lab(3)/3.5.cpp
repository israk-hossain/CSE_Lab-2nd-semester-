#include <bits/stdc++.h>
using namespace std;

int middleOfThree(int a, int b, int c)
{

    if ((a < b && b < c) || (c < b && b < a))
        return b;


    else if ((b < a && a < c) || (c < a && a < b))
        return a;

    else
        return c;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout << middleOfThree(a, b, c);
    return 0;
}
