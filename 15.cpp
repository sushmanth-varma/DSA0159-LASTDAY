#include <iostream>
#include <cmath> // for sqrt
using namespace std;

void findSquareRoot(double num) {
    cout << "Square root of " << num << " is " << sqrt(num) << endl;
}

inline void increment(int &num) {
    ++num;
}

inline void decrement(int &num) {
    --num;
}

int main() {
    double num;
    int value;

    cout << "Enter a number to find the square root: ";
    cin >> num;
    findSquareRoot(num);

    cout << "Enter an integer to increment and decrement: ";
    cin >> value;

    increment(value);
    cout << "After increment: " << value << endl;

    decrement(value);
    cout << "After decrement: " << value << endl;

    return 0;
}

