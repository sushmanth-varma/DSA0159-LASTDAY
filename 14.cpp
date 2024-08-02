#include <iostream>
#include <cmath>
using namespace std;

// Function to find the square root
void findSquareRoot(double num) {
    cout << "Square root of " << num << " is: " << sqrt(num) << endl;
}

// Inline function for incrementing and decrementing
inline void incrementDecrement(int &num) {
    num++;
    cout << "After increment: " << num << endl;
    num--;
    num--;
    cout << "After decrement: " << num << endl;
}

int main() {
    double number;

    cout << "Enter a number to find its square root: ";
    cin >> number;
    findSquareRoot(number);

    int num;
    cout << "\nEnter a number to increment and decrement: ";
    cin >> num;
    incrementDecrement(num);

    return 0;
}
