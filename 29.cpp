#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter 1 to throw an integer exception, 2 for a double exception: ";
        cin >> choice;

        if (choice == 1) {
            throw 42;
        } else if (choice == 2) {
            throw 3.14;
        } else {
            throw runtime_error("Invalid choice");
        }
    } catch (int e) {
        cout << "Caught an integer exception: " << e << endl;
    } catch (double e) {
        cout << "Caught a double exception: " << e << endl;
    } catch (const exception& e) {
        cout << "Caught a standard exception: " << e.what() << endl;
    }

    return 0;
}
