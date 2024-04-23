#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    void set_date() {
        cin >> day >> month >> year;
        cin.ignore();
    }

    void get_date() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    bool is_valid_date() {
        if (month < 1 || month > 12)
            return false;
        if (day < 1)
            return false;
        if (month == 2) {
            if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
                return day <= 29;
            } else {
                return day <= 28;
            }
        }
        if (month == 4 || month == 6 || month == 9 || month == 11)
            return day <= 30;
        return day <= 31;
    }
};

int main() {
    Date date;
    date.set_date();
    if (date.is_valid_date()) {
        cout << "Valid Date" << endl;
        date.get_date();
    } else {
        cout << "Invalid Date" << endl;
    }

    return 0;
}




