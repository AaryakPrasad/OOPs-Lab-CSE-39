#include <iostream>
using namespace std;
class account
{
    protected:
        int accno;
        char name[50];
        float balance;
    public:
        account()
        {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter account number: ";
            cin >> accno;
            cout << "Enter balance: ";
            cin >> balance;
        }
        virtual void deposit() = 0;
        virtual void withdraw() = 0;
        virtual void display() = 0;
};
class savings: public account
{
    protected:
        float minbal;
    public:
        savings()
        {
            cout << "Enter minimum balance: ";
            cin >> minbal;
        }
        void deposit()
        {
            float amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
        }
        void withdraw()
        {
            float amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > balance)
                cout << "Insufficient balance" << endl;
            else if (balance - amount < minbal)
                cout << "Minimum balance should be " << minbal << endl;
            else
                balance -= amount;
        }
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Account number: " << accno << endl;
            cout << "Balance: " << balance << endl;
            cout << "Minimum balance: " << minbal << endl;
        }
};
class current: public account
{
    protected:
        float overdraft;
    public:
        current()
        {
            cout << "Enter overdraft limit: ";
            cin >> overdraft;
        }
        void deposit()
        {
            float amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            balance += amount;
        }
        void withdraw()
        {
            float amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > balance + overdraft)
                cout << "Insufficient balance" << endl;
            else
                balance -= amount;
        }
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Account number: " << accno << endl;
            cout << "Balance: " << balance << endl;
            cout << "Overdraft limit: " << overdraft << endl;
        }
};
int main()
{
    account *p[2];
    savings s;
    current c;
    p[0] = &s;
    p[1] = &c;
    int choice;
    do
    {
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                p[0]->deposit();
                p[1]->deposit();
                break;
            case 2:
                p[0]->withdraw();
                p[1]->withdraw();
                break;
            case 3:
                p[0]->display();
                p[1]->display();
                break;
            case 4:
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 4);
    return 0;
}