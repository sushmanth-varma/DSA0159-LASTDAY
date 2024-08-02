#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {
        cout << "Rectangle object created." << endl;
    }

    // Destructor
    ~Rectangle() {
        cout << "Rectangle object destroyed." << endl;
    }

    // Function to calculate area
    double area() const {
        return length * width;
    }

    // Display function
    void display() const {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    rect.display();

    return 0;
}
