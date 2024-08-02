#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
   
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.5, 2.5);

    Complex c3 = c1 + c2; 

    cout << "Result of addition: ";
    c3.display();

    return 0;
}
