#include <iostream>
using namespace std;
class bank
{
    private:
        char name[30];
        int acc_num;
        char type[10];
        int balance;
    public:
        void acc_create();
        void deposit(int dep);
        void withdraw(int with);
        void show_balance();  
};
void bank::acc_create()
{
    int check;
    cout << "Enter name: ";
    cin.ignore();
    cin.getline( name, 30);
    cout << "Enter account number: ";
    cin >> acc_num;
    cout << "Enter account type: ";
    cin.ignore();
    cin.getline( type, 10);
    jump:cout << "Enter balance: ";
        cin >> check;
    if (check < 1000)
    {
        cout << "Minimum balance must be greater than 1000." << endl;
        goto jump;
    }
    else
        balance = check;
}
void bank::deposit(int dep)
{
    balance = balance + dep;
}
void bank::withdraw(int with)
{
    if (with > balance)
        cout << "Insufficient balance. Withdrawal failed." << endl;
    else
    {
        balance = balance - with;
        cout << "Withdrawal successful." << endl;
    }
}
void bank::show_balance()
{
    cout << "Name of Account holder: " << name << endl;
    cout << "Account number: " << acc_num << endl;
    cout << "Account type: " << type << endl;
    cout << "Balance: " << balance << endl;
}
int main()
{
    bank b1;
    cout<<"Enter 1 to create/edit account"<<endl<<"Enter 2 to deposit "<<endl<<"Enter 3 to withdraw "<<endl<<"Enter 4 to show balance"<<endl<<"Enter 5 to exit "<<endl<<"Enter your choice: ";
    int choice;
    cin >> choice;
    while (choice != 5)
    {
        switch (choice)
        {
            case 1:
                b1.acc_create();
                break;
            case 2:
                int dep;
                cout << "Enter amount to deposit: ";
                cin >> dep;
                b1.deposit(dep);
                break;
            case 3:
                int with;
                cout << "Enter amount to withdraw: ";
                cin >> with;
                b1.withdraw(with);
                break;
            case 4:
                b1.show_balance();
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }
        cout<<"Enter 1 to create/edit account"<<endl<<"Enter 2 to deposit "<<endl<<"Enter 3 to withdraw "<<endl<<"Enter 4 to show balance"<<endl<<"Enter 5 to exit "<<endl<<"Enter your choice: ";
        cin >> choice;
    }
    return 0;
}