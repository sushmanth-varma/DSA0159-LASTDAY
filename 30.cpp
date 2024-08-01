#include <iostream>
#include <cmath>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

bool isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int number;

    cout << "Enter a number to check for Perfect number: ";
    cin >> number;
    if (isPerfect(number)) {
        cout << number << " is a Perfect number." << endl;
    } else {
        cout << number << " is not a Perfect number." << endl;
    }

    cout << "Enter a number to check for Armstrong number: ";
    cin >> number;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}

