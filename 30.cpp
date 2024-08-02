#include <iostream>
#include <cmath>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int val) : value(val) {}

    // Overload the == operator to check for a perfect number
    bool operator==(const Number &n) {
        int sum = 0;
        for (int i = 1; i < n.value; ++i) {
            if (n.value % i == 0) {
                sum += i;
            }
        }
        return sum == n.value;
    }

    // Overload the * operator to check for an Armstrong number
    bool operator*(const Number &n) {
        int sum = 0, temp = n.value, digits = 0;

        // Count the number of digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = n.value;

        // Calculate the sum of the digits raised to the power of the number of digits
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        return sum == n.value;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    int num1, num2;
    
    cout << "Enter a number to check for perfect number: ";
    cin >> num1;
    cout << "Enter a number to check for Armstrong number: ";
    cin >> num2;

    Number number1(num1);
    Number number2(num2);

    // Check for perfect number
    if (number1 == number1) {
        cout << number1.getValue() << " is a perfect number." << endl;
    } else {
        cout << number1.getValue() << " is not a perfect number." << endl;
    }

    // Check for Armstrong number
    if (number2 * number2) {
        cout << number2.getValue() << " is an Armstrong number." << endl;
    } else {
        cout << number2.getValue() << " is not an Armstrong number." << endl;
    }

    return 0;
}
