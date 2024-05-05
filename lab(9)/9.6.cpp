#include <iostream>
using namespace std;

class BankAccount {
protected:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited $" << amount << ". Current balance: $" << balance << endl;
    }

    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn $" << amount << ". Current balance: $" << balance << endl;
        } else {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        }
    }


    double getBalance() const {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
public:

    SavingsAccount(double initialBalance) : BankAccount(initialBalance) {}


    void withdraw(double amount) override {
        if (balance - amount >= 100.0) {
            balance -= amount;
            cout << "Withdrawn $" << amount << ". Current balance: $" << balance << endl;
        } else {
            cout << "Withdrawal failed. Minimum balance requirement not met." << endl;
        }
    }
};

int main() {
    SavingsAccount savingsAccount(500.0);


    savingsAccount.deposit(200.0);
    savingsAccount.withdraw(50.0);
    savingsAccount.withdraw(400.0);

    return 0;
}
