#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int greater = (num1 > num2) ? num1 : num2;

    cout << "The greater number is: " << greater << endl;

    return 0;
}
