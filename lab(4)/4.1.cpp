#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
        i += 6;
    }
    return true;
}

int main() {
    int num;
    
    while (true) {
        cin >> num;
        
        if (num == 0)
            break;
        
        if (isPrime(num))
            cout << num << "prime number." << endl;
        else
            cout << num << "not prime number." << endl;
    }

    return 0;
}
