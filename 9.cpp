#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    double average;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    average = static_cast<double>(num1 + num2 + num3) / 3;

    cout << "The average is: " << average << endl;

    return 0;
}
