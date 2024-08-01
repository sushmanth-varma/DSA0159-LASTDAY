#include <iostream>
using namespace std;

int main() {
    int numerator, denominator, result;

    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            throw "Division by zero error!";
        }
        result = numerator / denominator;
        cout << "Result: " << result << endl;
    } catch (const char* msg) {
        cerr << msg << endl;
    }

    return 0;
}

