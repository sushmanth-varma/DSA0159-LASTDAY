#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {
        cout << "Rectangle created." << endl;
    }

    ~Rectangle() {
        cout << "Rectangle destroyed." << endl;
    }

    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }

    void display() const {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << ", Perimeter: " << perimeter() << endl;
    }
};

int main() {
    double length, width;
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;

    Rectangle rect(length, width);
    rect.display();

    return 0;
}

