
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num > 0)
        cout << num << " is positive." << endl;
    else if (num < 0)
        cout << num << " is negative." << endl;
    else
        cout << "You entered zero." << endl;
    return 0;
}
