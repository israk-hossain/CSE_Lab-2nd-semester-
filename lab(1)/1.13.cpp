#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;
    if (num % 2 == 0)
        cout << "Square of " << num << " is " << pow(num, 2) << endl;
    else
        cout << "Cube of " << num << " is " << pow(num, 3) << endl;
    return 0;
}
