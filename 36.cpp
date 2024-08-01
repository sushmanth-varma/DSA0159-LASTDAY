#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        int num;
        cout << "Enter a positive number: ";
        cin >> num;

        if (num < 0) {
            throw invalid_argument("Negative number entered");
        }

        cout << "You entered: " << num << endl;
    } catch (const invalid_argument& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}

