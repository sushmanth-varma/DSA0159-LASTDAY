#include <iostream>
using namespace std;

double calculateInterest(double principal, double rate, int time) {
    return (principal * rate * time) / 100;
}

int main() {
    double principal;
    int time, age;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the time (in years): ";
    cin >> time;
    cout << "Enter the age of the customer: ";
    cin >> age;

    double rate = (age >= 60) ? 12 : 10;
    double interest = calculateInterest(principal, rate, time);

    cout << "Simple Interest: " << interest << endl;

    return 0;
}

