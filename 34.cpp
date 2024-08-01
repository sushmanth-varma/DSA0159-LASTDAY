#include <iostream>
#include <cmath>
using namespace std;

class Shape {
protected:
    double height;
    double width;

public:
    virtual double area() = 0; // Pure virtual function
};

class Square : public Shape {
public:
    Square(double length) {
        height = width = length;
    }

    double area() override {
        return height * width;
    }
};

class Circle : public Shape {
public:
    Circle(double r) {
        height = width = r;
    }

    double area() override {
        return M_PI * height * height;
    }
};

int main() {
    double radius, length;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle circ(radius);
    cout << "Area of circle: " << circ.area() << endl;

    cout << "Enter the length of the square: ";
    cin >> length;
    Square sq(length);
    cout << "Area of square: " << sq.area() << endl;

    return 0;
}

