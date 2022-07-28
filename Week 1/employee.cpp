#include <iostream>
using namespace std;

struct employee
{
  int id;
  char name[50];
  int age;
  float salary;
  float gross_salary, da, hra;
};

int main()
{
  int n;
  cout << "Enter the number of employees: ";
  cin >> n;

  employee e[n];

  for(int i=1; i<=n; i++)
  {
    cin.ignore();
    cout << "Enter name of employee " << i << ": ";
    cin.getline(e[i].name, 50);

    cout << "Enter id of employee " << i << ": ";
    cin >> e[i].id;

    cout << "Enter age of employee " << i << ": ";
    cin >> e[i].age;

    cout << "Enter Basic Salary of employee " << i << ": ";
    cin >> e[i].salary;

    e[i].da = 0.8*e[i].salary;
    e[i].hra = 0.1*e[i].salary;
    e[i].gross_salary = e[i].salary + e[i].da + e[i].hra;

    cout << endl << endl;
  }

  cout << endl << endl;
  cout << "ENTERED DETAILS: " << endl << endl;

  for(int i=1; i<=n; i++)
  {
    cout << "Name of employee " << i << ": "<< e[i].name << endl;
    cout << "ID of employee " << i << ": " << e[i].id << endl;
    cout << "Age of employee " << i << ": " << e[i].age << endl;
    cout << "Basic Salary of employee " << i << ": " << e[i].salary << endl;
    cout << "Gross Salary of employee " << i << ": " << e[i].gross_salary << endl;
    cout << endl << endl;
  }

}