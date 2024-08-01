#include <iostream>
#include <string>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter 1 for int exception, 2 for char exception, 3 for string exception: ";
        cin >> choice;

        if (choice == 1) {
            throw 42;
        } else if (choice == 2) {
            throw 'a';
        } else if (choice == 3) {
            throw string("string exception");
        } else {
            throw 1.23;
        }
    } catch (int e) {
        cout << "Caught an integer: " << e << endl;
    } catch (char e) {
        cout << "Caught a char: " << e << endl;
    } catch (const string& e) {
        cout << "Caught a string: " << e << endl;
    } catch (...) {
        cout << "Caught an unknown exception" << endl;
    }

    return 0;
}
	 
