#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    // Constructor
    Car(string b, int y) : brand(b), year(y) {}

    // Function to display car attributes
    void display() const {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1("Toyota", 2020);

    // Create a pointer to the object
    Car* carPtr = &car1;

    // Use the pointer to access the object's attributes
    carPtr->display();

    return 0;
}
