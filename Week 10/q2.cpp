#include <iostream>
using namespace std;
class employee
{
    protected:
        char empname[50];
        int empid;
        float salary;
    public:
        employee()
        {
            cout << "Enter name: ";
            cin >> empname;
            cout << "Enter ID: ";
            cin >> empid;
        }
        virtual void salarycalc() = 0;
};
class regular: public employee
{
    protected:
        int DA,HRA,basic;
    public:
        regular()
        {
            cout << "Enter basic salary: ";
            cin >> basic;
        }
        void salarycalc()
        {
            DA = 0.5 * basic;
            HRA = 0.3 * basic;
            salary = basic + DA + HRA;
            cout << "Salary of " << empname <<" is:"<<  salary << endl;
        }
};
class parttime: public employee
{
    protected:
        int hours;
        float rate;
    public:
        parttime()
        {
            cout << "Enter hours worked: ";
            cin >> hours;
            cout << "Enter rate per hour: ";
            cin >> rate;
        }
        void salarycalc()
        {
            salary = hours * rate;
            cout << "Salary of " << empname <<" is:"<<  salary << endl;
        }
};
int main()
{
    employee *p[2];
    regular r;
    parttime p1;
    p[0] = &r;
    p[1] = &p1;
    for (int i = 0; i < 2; i++)
    {
        p[i]->salarycalc();
    }
    return 0;
}