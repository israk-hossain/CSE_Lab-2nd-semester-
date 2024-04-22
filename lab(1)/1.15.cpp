


#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    return false;
}

int main() {
    int year;
    cin >> year;
    if (isLeapYear(year))
        cout << year << " is leap year" << endl;
    else {
        cout << year << " is not leap year." << endl;
        int nextLeapYear = year + 1;
        while (!isLeapYear(nextLeapYear))
            nextLeapYear++;
        int prevLeapYear = year - 1;
        while (!isLeapYear(prevLeapYear))
            prevLeapYear--;
        cout << "Nearest leap years: " << prevLeapYear << " and " << nextLeapYear << endl;
    }
    return 0;
}
