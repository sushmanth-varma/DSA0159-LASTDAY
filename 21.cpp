#include <iostream>
using namespace std;
void modifyValues(int *x, int *y) {
    *x = 20;
    *y = 30;
    cout << "Inside modifyValues: x = " << *x << ", y = " << *y << endl;
}

int main() {
    int x = 10, y = 15;
    
    cout << "Before modifyValues: x = " << x << ", y = " << y << endl;
    
    modifyValues(&x, &y);
    
    cout << "After modifyValues: x = " << x << ", y = " << y << endl;
    
    return 0;
}
