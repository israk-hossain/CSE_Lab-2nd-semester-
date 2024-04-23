
#include <iostream>
using namespace std;

class ElectricityBill {
private:
    string customer_name;
    int units_consumed;
    double total_bill;
public:
    void get() {
        cout << "Enter customer name: ";
        getline(cin, customer_name);
        cout << "Enter units consumed: ";
        cin >> units_consumed;
        cin.ignore();
    }

    void calc_bill() {
        if (units_consumed <= 100)
            total_bill = units_consumed * 5;
        else if (units_consumed <= 200)
            total_bill = 100 * 5 + (units_consumed - 100) * 7;
        else
            total_bill = 100 * 5 + 100 * 7 + (units_consumed - 200) * 9;
    }

    void put() {
        cout << "Customer Name: " << customer_name << endl;
        cout << "Units Consumed: " << units_consumed << endl;
        cout << "Total Bill: " << total_bill << " taka" << endl;
    }
};

int main() {
    ElectricityBill customer;
    customer.get();
    customer.calc_bill();
    customer.put();

    return 0;
}
