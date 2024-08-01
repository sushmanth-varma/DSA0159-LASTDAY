#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int a = num1, b = num2;
    do {
        int remainder = a % b;
        a = b;
        b = remainder;
    } while (b != 0);

    cout << "The greatest common divisor is: " << a << endl;

    return 0;
}

