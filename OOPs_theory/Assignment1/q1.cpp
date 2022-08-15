#include <iostream>
using namespace std;
class employee
{
    private:
        int emp_no;
        char name[50];
        char dept[50];
        float salary;

    public:
        void getdata();
        void showdata();
};
inline void employee::getdata()
{
    cout << "Enter id of employee: ";
    cin >> emp_no;
    cout << "Enter name of employee: ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "Enter department of employee: ";
    cin.ignore();
    cin.getline(dept, 50);
    cout << "Enter Salary of employee: ";
    cin >> salary;
}
inline void employee::showdata()
{
    cout << "Employee ID of employee: " << emp_no << endl;
    cout << "Name of employee: " << name << endl;
    cout << "Dept. of employee: " << dept << endl;
    cout << "Basic Salary of employee: " << salary << endl;
}
int main()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    employee emp[n];
    for(int i = 0; i < n; i++)
        emp[i].getdata();
    for(int i = 0; i < n; i++)
        emp[i].showdata();
    return 0;
}