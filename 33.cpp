#include <iostream>
using namespace std;

int main() {
    char arr[] = "Hello, world!";
    char* ptr = arr;

    cout << "Array values: ";
    while (*ptr != '\0') {
        cout << *ptr;
        ++ptr;
    }
    cout << endl;

    return 0;
}

