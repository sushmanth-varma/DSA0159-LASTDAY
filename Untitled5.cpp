#include <iostream>
#include <math.h>
using namespace std;

class Shape {
public:
    double area, volume;
};

class Cuboid : public Shape {
public:
    void calculateArea(double length, double width, double height) {
        area = 2 * (length * width + width * height + height * length);
        cout << "Cuboid Area: " << area << endl;
    }

    void calculateVolume(double length, double width, double height) {
        volume = length * width * height;
        cout << "Cuboid Volume: " << volume << endl;
    }
};

class Cylinder : public Shape {
public:
    void calculateArea(double radius, double height) {
        area = 2 * M_PI * radius * (radius + height);
        cout << "Cylinder Area: " << area << endl;
    }

    void calculateVolume(double radius, double height) {
        volume = M_PI * radius * radius * height;
        cout << "Cylinder Volume: " << volume << endl;
    }
};

int main() {
    Cuboid cuboid;
    Cylinder cylinder;

    double length = 9.0;
    double width = 5.0;
    double height = 3.0;
    double radius = 7.0;

    cuboid.calculateArea(length, width, height);
    cuboid.calculateVolume(length, width, height);

    cylinder.calculateArea(radius, height);
    cylinder.calculateVolume(radius, height);

    return 0;
}
