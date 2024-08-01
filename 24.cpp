#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNumber, double initialBalance)
        : accountHolderName(name), accountNumber(accNumber), balance(initialBalance) {
        cout << "Bank account created for " << accountHolderName << endl;
    }

    ~BankAccount() {
        cout << "Bank account for " << accountHolderName << " closed." << endl;
    }

    void displayAccountInfo() const {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("John Doe", 12345678, 1000.0);
    account.displayAccountInfo();
    return 0;
}

