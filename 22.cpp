#include <iostream>
using namespace std;

void modifyValues(int* a, int* b) {
    *a = 10;
    *b = 20;
}

int main() {
    int x = 5, y = 15;
    cout << "Before modification: x = " << x << ", y = " << y << endl;
    modifyValues(&x, &y);
    cout << "After modification: x = " << x << ", y = " << y << endl;
    return 0;
}

