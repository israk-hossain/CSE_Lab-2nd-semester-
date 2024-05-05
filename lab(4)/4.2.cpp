#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int num)
{
    if(num <= 1)
        return false;
    for(int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void displayprimebetween(int start, int end)
{
    cout << "Prime Numbers Between " << start << " And " << end << " are: ";
    for(int i = start; i <= end; ++i)
    {
        if(isprime(i))
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int start, end;
    cin >> start >> end;

    while(start > end)
    {
        cin >> start >> end;
    }

    displayprimebetween(start, end);
    return 0;
}
