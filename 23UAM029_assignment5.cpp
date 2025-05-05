
#include <iostream>
#include <string>
using namespace std;

// Class Bank with function overloading
class Bank {
public:
    void deposit(int amount) {
        cout << "Depositing " << amount << " rs in cash." << endl;
    }

    void deposit(double amount) {
        cout << "Depositing " << amount << " rs via digital payment." << endl;
    }

    void deposit(const string& upiId, double amount) {
        cout << "Depositing " << amount << " rs using UPI (" << upiId << ")." << endl<<endl;
    }
};

// Class Account with operator overloading
class Account {
private:
    int accountNumber;
    double balance;

public:
    Account(int accountNumber, double initialBalance) : accountNumber(accountNumber), balance(initialBalance) {}

    double getBalance() const {
        return balance;
    }

    void displayAccountDetails() const {
        cout << "Account " << accountNumber << " Balance: " << balance <<" rs."<< endl<<endl;
    }

    Account operator+(const Account& other) const {
        double newBalance = balance + other.balance;
        cout << "Transferring " << other.balance << " from Account " << other.accountNumber << " to Account " << accountNumber << "..." << endl;
        return Account(accountNumber, newBalance);
    }

    Account operator-(double amount) const {
        double newBalance = balance - amount;
        cout << "Withdrawing " << amount << " from Account " << accountNumber << "..." << endl;
        return Account(accountNumber, newBalance);
    }
};

int main() {
    Bank bank;

    bank.deposit(5000);
    bank.deposit(1500.75);
    bank.deposit("gpay@upi", 2500);

    Account account1(1, 10000);
    Account account2(2, 5000);

    account1.displayAccountDetails();
    account2.displayAccountDetails();

    account1 = account1 + account2;
    account1.displayAccountDetails();
    account2.displayAccountDetails();

    account1 = account1 - 2000;
    account1.displayAccountDetails();

    return 0;
}


