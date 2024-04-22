#include <iostream>
using namespace std;

int main() {
    int subject1, subject2, subject3;
    cin >> subject1 >> subject2 >> subject3;
    int total = subject1 + subject2 + subject3;
    float percentage = (total / 3.0) * 1;
    cout << "Percentage: " << percentage << "%" << endl;
    if (percentage >= 60)
        cout << "First" << endl;
    else if (percentage >= 50 && percentage <= 59)
        cout << "Second" << endl;
    else if (percentage >= 40 && percentage <= 49)
        cout << "Third" << endl;
    else
        cout << "Fail" << endl;
    return 0;
}
