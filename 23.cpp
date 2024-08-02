#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string holder, double initialBalance) : accountHolder(holder), balance(initialBalance) {
        cout << "Bank account created for " << accountHolder << " with initial balance $" << balance << "." << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Bank account for " << accountHolder << " is closed." << endl;
    }

    // Function to display account details
    void displayAccount() const {
        cout << "Account Holder: " << accountHolder << ", Balance: $" << balance << endl;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "$" << amount << " deposited. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "$" << amount << " withdrawn. New balance: $" << balance << endl;
        } else {
            cout << "Invalid or insufficient funds for withdrawal!" << endl;
        }
    }
};

int main() {
    BankAccount account1("John Doe", 1000.0);
    account1.displayAccount();
    
    account1.deposit(200.0);
    account1.withdraw(500.0);
    
    return 0;
}
