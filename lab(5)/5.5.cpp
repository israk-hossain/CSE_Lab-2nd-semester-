
#include <iostream>
using namespace std;

class Prime {
private:
    int num;
public:
    void get_input() {
        cin >> num;
    }

    void calculate() {
        bool isPrime = true;
        if (num <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i * i <= num; ++i) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
            cout << num << "prime number" << endl;
        else
            cout << num << "not prime number" << endl;
    }
};

int main() {
    Prime p;
    p.get_input();
    p.calculate();

    return 0;
}
