#include <iostream>
using namespace std;

int main() {
    char arr[] = "Hello, World!";
    char* ptr = arr;

    cout << "Array values using pointer: ";
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
    cout << endl;

    return 0;
}
