#include <iostream>
using namespace std;
int main() {
    int num1, num2, quotient, remainder;
    cin >> num1 >> num2;
    quotient = num1 / num2;
    remainder = num1 % num2;
    cout << "Quotient: " << quotient << ", Remainder: " << remainder << endl;
    return 0;
}
