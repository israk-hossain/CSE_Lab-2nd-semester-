#include <iostream>
using namespace std;

class Shape {
protected:
    int width;
    int height;
public:
    Shape(int w, int h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    int calculate_area() {
        return width * height;
    }

    int calculate_perimeter() {
        return 2 * (width + height);
    }
};

class Square : public Shape {
public:
    Square(int side) : Shape(side, side) {}

    int calculate_area() {
        return height * height;
    }

    int calculate_perimeter() {
        return 4 * height;
    }
};

int main() {
    int rectangle_width, rectangle_height;
    cout << "width and height of the rectangle:";
    cin >> rectangle_width >> rectangle_height;

    int square_side;
    cout << "side length of the square: ";
    cin >> square_side;

    Rectangle rectangle(rectangle_width, rectangle_height);
    Square square(square_side);

    int rectangle_area = rectangle.calculate_area();
    int rectangle_perimeter = rectangle.calculate_perimeter();
    int square_area = square.calculate_area();
    int square_perimeter = square.calculate_perimeter();

    cout << "Rectangle Area: " << rectangle_area << endl;
    cout << "Rectangle Perimeter: " << rectangle_perimeter << endl;
    cout << "Square Area: " << square_area << endl;
    cout << "Square Perimeter: " << square_perimeter << endl;

    return 0;
}
