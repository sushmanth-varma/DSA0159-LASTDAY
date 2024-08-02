#include <iostream>
#include <cmath>
using namespace std;

// Abstract base class Shape
class Shape {
protected:
    double area;

public:
    // Pure virtual function
    virtual void calculateArea() = 0;

    // Function to display the area
    void displayArea() const {
        cout << "Area: " << area << endl;
    }
};

// Derived class Square
class Square : public Shape {
private:
    double length;

public:
    // Constructor
    Square(double l) : length(l) {}

    // Implement the pure virtual function
    void calculateArea() override {
        area = length * length;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Implement the pure virtual function
    void calculateArea() override {
        area = M_PI * radius * radius;
    }
};

int main() {
    double radius, length;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Enter the length of the square: ";
    cin >> length;

    Circle circle(radius);
    Square square(length);

    circle.calculateArea();
    cout << "Area of circle: ";
    circle.displayArea();

    square.calculateArea();
    cout << "Area of square: ";
    square.displayArea();

    return 0;
}
