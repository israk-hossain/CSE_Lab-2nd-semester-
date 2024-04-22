#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "Root1 = Root2 = " << root1 << endl;
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
    return 0;
}
