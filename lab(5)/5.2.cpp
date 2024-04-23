
#include <iostream>
using namespace std;

class Box {
public:
    int height;
    int length;
    int width;

    void print_volume() {
        int volume = height * length * width;
        cout << "Volume of the box: " << volume << endl;
    }
};

int main() {
    Box box1;
    cin >> box1.height;
    cin >> box1.length;
    cin >> box1.width;

    box1.print_volume();

    return 0;
}
