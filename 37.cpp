#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r, double i) : real(r), imag(i) {}

    // Overload the - operator
    Complex operator-(const Complex &c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    // Function to display complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex num1(4.5, 3.2);
    Complex num2(1.5, 1.2);

    Complex result = num1 - num2;

    cout << "Result of subtraction: ";
    result.display();

    return 0;
}
