#include <iostream>
using namespace std;

// Function to calculate simple interest
double calculateSimpleInterest(double principal, int years, bool isSeniorCitizen) {
    double rate = isSeniorCitizen ? 12.0 : 10.0;
    return (principal * rate * years) / 100;
}

int main() {
    double principal;
    int years;
    char senior;

    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the number of years: ";
    cin >> years;
    cout << "Is the customer a senior citizen? (y/n): ";
    cin >> senior;

    bool isSeniorCitizen = (senior == 'y' || senior == 'Y');

    double interest = calculateSimpleInterest(principal, years, isSeniorCitizen);
    cout << "Simple Interest: $" << interest << endl;

    return 0;
}
