#include <iostream>
using namespace std;

class Mammals {
public:
    void printMammal() {
        cout << "I am a mammal" << endl;
    }
};

class MarineAnimals {
public:
    void printMarineAnimal() {
        cout << "I am a marine animal" << endl;
    }
};

class BlueWhale : public Mammals, public MarineAnimals {
public:
    void printBlueWhale() {
        cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
    }
};

int main() {
    Mammals mammal;
    MarineAnimals marineAnimal;
    BlueWhale blueWhale;

    cout << "Calling function of Mammals by the object of Mammals:" << endl;
    mammal.printMammal();

    cout << "\nCalling function of MarineAnimals by the object of MarineAnimals:" << endl;
    marineAnimal.printMarineAnimal();

    cout << "\nCalling function of BlueWhale by the object of BlueWhale:" << endl;
    blueWhale.printBlueWhale();

    cout << "\nCalling function of each of its parent by the object of BlueWhale:" << endl;
    blueWhale.printMammal();
    blueWhale.printMarineAnimal();

    return 0;
}
