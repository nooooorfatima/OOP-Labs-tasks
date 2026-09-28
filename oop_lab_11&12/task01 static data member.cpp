#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    double balance;

    // Static data member
    static int totalAccounts;

public:
    // Constructor
    BankAccount(string name, double bal)
    {
        accountHolder = name;
        balance = bal;
        totalAccounts++;
    }

    // Display account details
    void display()
    {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "------------------------" << endl;
    }

    // Display total accounts
    static void displayTotalAccounts()
    {
        cout << "Total Bank Accounts Created: "
             << totalAccounts << endl;
    }
};

// Initialize static data member
int BankAccount::totalAccounts = 0;

int main()
{
    // Create multiple objects
    BankAccount account1("Ali", 50000);
    BankAccount account2("Ahmed", 75000);
    BankAccount account3("Sara", 60000);

    // Display account details
    account1.display();
    account2.display();
    account3.display();

    // Display total accounts
    BankAccount::displayTotalAccounts();

    return 0;
}
