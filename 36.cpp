#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter 1 to throw a standard exception: ";
        cin >> choice;

        if (choice == 1) {
            throw runtime_error("Standard exception occurred");
        } else {
            cout << "No exception thrown." << endl;
        }
    } catch (const exception &e) {
        cout << "Caught a standard exception: " << e.what() << endl;
    }

    return 0;
}
