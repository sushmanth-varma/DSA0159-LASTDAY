#include <iostream>
#include <cmath>  // Include for sqrt()
using namespace std;

// Base class Shape
class Shape {
protected:
    double height;
    double width;

public:
    // Constructor
    Shape(double h, double w) : height(h), width(w) {}

    // Virtual functions for area and perimeter
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    // Constructor
    Rectangle(double h, double w) : Shape(h, w) {}

    // Implement area and perimeter functions
    double area() const override {
        return height * width;
    }

    double perimeter() const override {
        return 2 * (height + width);
    }
};

// Derived class Triangle
class Triangle : public Shape {
public:
    // Constructor
    Triangle(double h, double w) : Shape(h, w) {}

    // Implement area and perimeter functions
    double area() const override {
        return (height * width) / 2;
    }

    // Assumes a right-angled triangle with 'height' and 'width' as the perpendicular sides
    double perimeter() const override {
        double hypotenuse = sqrt((height * height) + (width * width));
        return height + width + hypotenuse;
    }
};

int main() {
    double height, width;

    cout << "Enter the height and width of the rectangle: ";
    cin >> height >> width;
    Rectangle rectangle(height, width);

    cout << "Area of Rectangle: " << rectangle.area() << endl;
    cout << "Perimeter of Rectangle: " << rectangle.perimeter() << endl;

    cout << "Enter the base and height of the triangle (assumed right-angled): ";
    cin >> height >> width;
    Triangle triangle(height, width);

    cout << "Area of Triangle: " << triangle.area() << endl;
    cout << "Perimeter of Triangle: " << triangle.perimeter() << endl;

    return 0;
}
