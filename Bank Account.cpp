#include <iostream>
using namespace std;


class bankAccount {
protected:
    int accountNumber;
    double balance;

public:
   
    bankAccount() : accountNumber(0), balance(0.0) {}

    
    bankAccount(int accNo, double bal) : accountNumber(accNo), balance(bal) {}

    void setAccountNumber(int accNo) {
        accountNumber = accNo;
    }

    int getAccountNumber() const {
        return accountNumber;
    }

    double getBalance() const {
        return balance;
    }

    virtual void deposit(double amount) {
        balance += amount;
    }

    // Virtual so that derived class can override
    virtual void withdraw(double amount) {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    virtual void printInfo() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

// ----------- Derived Class: checkingAccount -----------
class checkingAccount : public bankAccount {
private:
    double minBalance;
    double serviceCharge;
    double interestRate;

public:
    checkingAccount() : bankAccount(), minBalance(100.0), serviceCharge(10.0), interestRate(0.0) {}

    checkingAccount(int accNo, double bal, double minBal, double servCharge)
        : bankAccount(accNo, bal), minBalance(minBal), serviceCharge(servCharge), interestRate(0.0) {}

    void setInterestRate(double rate) {
        interestRate = rate;
    }

    double getInterestRate() const {
        return interestRate;
    }

    void setMinBalance(double minBal) {
        minBalance = minBal;
    }

    double getMinBalance() const {
        return minBalance;
    }

    void setServiceCharge(double charge) {
        serviceCharge = charge;
    }

    bool isBelowMinBalance() const {
        return balance < minBalance;
    }

    void writeCheck(double amount) {
        withdraw(amount);
    }

    void withdraw(double amount) override {
        if (balance >= amount)
            balance -= amount;
        else {
            cout << "Insufficient balance!" << endl;
            return;
        }

        // Apply service charge if balance falls below minBalance
        if (balance < minBalance) {
            cout << "Balance below minimum! Applying service charge: $" << serviceCharge << endl;
            balance -= serviceCharge;
        }
    }

    void printInfo() const override {
        cout << "\n--- Checking Account ---" << endl;
        bankAccount::printInfo();
        cout << "Minimum Balance: $" << minBalance << endl;
        cout << "Service Charge: $" << serviceCharge << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// ----------- Derived Class: savingsAccount -----------
class savingsAccount : public bankAccount {
private:
    double interestRate;

public:
    savingsAccount() : bankAccount(), interestRate(0.0) {}

    savingsAccount(int accNo, double bal, double rate)
        : bankAccount(accNo, bal), interestRate(rate) {}

    void setInterestRate(double rate) {
        interestRate = rate;
    }

    double getInterestRate() const {
        return interestRate;
    }

    void postInterest() {
        double interest = balance * (interestRate / 100.0);
        balance += interest;
        cout << "Interest of $" << interest << " added to account." << endl;
    }

    void withdraw(double amount) override {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    
	}

    void printInfo() const override {
        cout << "\n--- Savings Account ---" << endl;
        bankAccount::printInfo();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// ----------- Main Function -----------
int main() {
    // Creating Checking Account
    checkingAccount chkAcc(101, 500.0, 200.0, 15.0);
    chkAcc.setInterestRate(2.5);
    chkAcc.deposit(100);
    chkAcc.withdraw(450); // will apply service charge if below min balance
    chkAcc.printInfo();

    // Creating Savings Account
    savingsAccount savAcc(202, 1000.0, 4.0);
    savAcc.postInterest(); // apply interest
    savAcc.withdraw(200);
    savAcc.printInfo();

    return 0;
}
