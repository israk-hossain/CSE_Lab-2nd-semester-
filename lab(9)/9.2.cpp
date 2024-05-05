#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class RandomNumberPrinter {
public:
    RandomNumberPrinter() {
        srand(time(nullptr));
    }

    void printRandomNumber() {
        int randomNumber = rand() % 9 + 1;
        cout << "Random number: " << randomNumber << endl;
    }
};

int main() {
    RandomNumberPrinter printer;

    char key;
    do {
        cout << "Press 'n' to generate a random number or 'q' to quit: ";
        cin >> key;

        if (key == 'n') {
            printer.printRandomNumber();
        }

    } while (key != 'q');

    return 0;
}
