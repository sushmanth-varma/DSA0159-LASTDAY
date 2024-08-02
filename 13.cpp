#include <iostream>
using namespace std;

int main() {
    int num1, num2, gcd;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int a = num1;
    int b = num2;

    do {
        gcd = b;
        b = a % b;
        a = gcd;
    } while (b != 0);

    cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;

    return 0;
}
