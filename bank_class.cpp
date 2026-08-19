#include <iostream>
using namespace std;
class BankAccount {
public:
    string accountHolderName;
    int accountNumber;
    float balance;
    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: "<< amount <<"\n"<<" New balance: " << balance << endl;
    }
    void display() {
        cout << "Account Holder: " << accountHolderName <<"\n"<< " Account Number: " << accountNumber <<"\n"<< " Balance: " << balance << endl;
    }

};
int main() {
    BankAccount account1, account2;
    cout << "Enter account holder name, account number and initial balance for account 1: ";
    cin >> account1.accountHolderName >> account1.accountNumber >> account1.balance;
    cout << "Enter account holder name, account number and initial balance for account 2: ";
    cin >> account2.accountHolderName >> account2.accountNumber >> account2.balance;

    float depositAmount;
    cout << "Enter amount to deposit into account 1: ";
    cin >> depositAmount;
    account1.deposit(depositAmount);

    cout << "Enter amount to deposit into account 2: ";
    cin >> depositAmount;
    account2.deposit(depositAmount);

    account1.display();
    account2.display();

    return 0;
}   

