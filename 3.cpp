#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    unsigned long long factorial = 1;
    
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }
    
    cout << "Factorial of " << num << " is " << factorial << endl;
    
    return 0;
}
