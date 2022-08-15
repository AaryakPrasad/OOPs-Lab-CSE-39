#include <iostream>
using namespace std;
class employee
{
    private:
        int id;
        char name[50];
        int age;
        float salary;
        float gross_salary, da, hra;

    public:
        void getdata();
        void showdata();
        void calc_gross();
};
void employee::getdata()
{
    cout << "Enter id of employee: ";
    cin >> id;
    cout << "Enter name of employee: ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "Enter age of employee: ";
    cin >> age;
    cout << "Enter Basic Salary of employee: ";
    cin >> salary;
}
void employee::showdata()
{
    cout << "ID of employee: " << id << endl;
    cout << "Name of employee: " << name << endl;
    cout << "Age of employee: " << age << endl;
    cout << "Basic Salary of employee: " << salary << endl;
    cout << "Gross Salary of employee " << gross_salary << endl;
}
void employee::calc_gross()
{
    da = 0.8*salary;
    hra = 0.1*salary;
    gross_salary = salary + da + hra;
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
        emp[i].calc_gross();
    for(int i = 0; i < n; i++)
        emp[i].showdata();
    return 0;
}