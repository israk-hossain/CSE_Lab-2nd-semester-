#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;
public:
    void set_dimensions() {
        cin >> width >> height;
        cin.ignore();
    }

    int calculate_area() {
        return width * height;
    }

    int calculate_perimeter() {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rectangle;
    rectangle.set_dimensions();
    cout << "Area: " << rectangle.calculate_area() << endl;
    cout << "Perimeter: " << rectangle.calculate_perimeter() << endl;

    return 0;
}




