#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double initial_balance)
    {
        if (initial_balance < 0)
        {
            cout << "Initial balance can't be negative. Setting to 0.\n";
            balance = 0;
        }
        else
        {
            balance = initial_balance;
        }
    }

    void deposit(double amount)
    {
        if (amount <= 0)
        {
            cout << "Deposit amount must be positive.\n";
            return;
        }
        balance += amount;
        cout << "Deposited ₹" << amount << ". New balance: ₹" << balance << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Withdrawal amount must be positive.\n";
            return;
        }
        if (amount > balance)
        {
            cout << "Insufficient balance! Current balance: ₹" << balance << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrew ₹" << amount << ". New balance: ₹" << balance << endl;
    }

    double getBalance() const
    {
        return balance;
    }
};

int main()
{
    // Initial scenario
    double initial_balance = 18000;
    double external_earning = 120000;

    cout << "Businessman was left with ₹" << initial_balance << " after scam.\n";
    cout << "After hard work, earned ₹" << external_earning << ".\n";

    BankAccount account(initial_balance);
    account.deposit(external_earning);

    int choice;
    double amount;
    do
    {
        cout << "\n--- Bank Menu ---\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ₹";
            cin >> amount;
            account.deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: ₹";
            cin >> amount;
            account.withdraw(amount);
            break;
        case 3:
            cout << "Current balance: ₹" << account.getBalance() << endl;
            break;
        case 4:
            cout << "Thank you for using the bank system.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;