#include <iostream>

class Parent {
protected:
    int* arr;
    int size;
public:
    Parent(int* array, int length) : arr(array), size(length) {}

    virtual double calculate_average() = 0;
    virtual ~Parent() { delete[] arr; }
};

class Child : public Parent {
public:
    Child(int* array, int length) : Parent(array, length) {}

    double calculate_average() override {
        if (size == 0) return 0;
        double sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        return sum / size;
    }
};

int main() {
    int length;
    std::cout << "Enter the length of the array: ";
    std::cin >> length;

    int* array = new int[length];
    std::cout << "Enter " << length << " integers separated by spaces: ";
    for (int i = 0; i < length; ++i) {
        std::cin >> array[i];
    }

    Child childObj(array, length);
    double average = childObj.calculate_average();
    std::cout << "Average: " << average << std::endl;

    return 0;
}
