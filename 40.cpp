#include <iostream>
using namespace std;

class Shape {
protected:
    double height;
    double width;

public:
    Shape(double h, double w) : height(h), width(w) {}

    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}

    double area() override {
        return height * width;
    }

    double perimeter() override {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    Triangle(double b, double h) : Shape(h, b) {}

    double area() override {
        return 0.5 * height * width;
    }

    double perimeter() override {
        // Assuming it's an equilateral triangle
        return 3 * width;
    }
};

int main() {
    Rectangle rect(10, 20);
    Triangle tri(10, 20);

    cout << "Rectangle Area: " << rect.area() << endl;
    cout << "Rectangle Perimeter: " << rect.perimeter() << endl;

    cout << "Triangle Area: " << tri.area() << endl;
    cout << "Triangle Perimeter: " << tri.perimeter() << endl;

    return 0;
}

