
#include <iostream>
using namespace std;

int main() {
    int num1, num2, temp;
    cin >> num1 >> num2;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "num1: " << num1 << ", num2: " << num2 << endl;
    return 0;
}