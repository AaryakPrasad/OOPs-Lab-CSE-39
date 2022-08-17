#include <iostream>
using namespace std;
class vector
{
private:
    int x, y, z;

public:
    void input();
    void output();
    void modify();
    void add();
    void mul_single();
    void mul_all();
    void divide();
};
void vector::input()
{
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;
}
void vector::output()
{
    cout << "P(" << x << "," << y << "," << z << ")" << endl;
}
void vector::modify()
{
    cout << "Enter axis to be modified(x,y,z): ";
    char ch;
    cin >> ch;
    if (ch == 'x')
    {
        cout << "Enter new x: ";
        cin >> x;
    }
    else if (ch == 'y')
    {
        cout << "Enter new y: ";
        cin >> y;
    }
    else if (ch == 'z')
    {
        cout << "Enter new z: ";
        cin >> z;
    }
    else
        cout << "Invalid input" << endl;
}
void vector::add()
{
    int n;
    cout << "Enter scalar to be added: ";
    cin >> n;
    x = x + n;
    y = y + n;
    z = z + n;
}
void vector::mul_single()
{
    int n;
    char ch;
    cout << "Enter the axis with which multiplication has to be done:";
    cin >> ch;
    cout << "Enter the scalar value:";
    cin >> n;
    if (ch == 'x')
        x = x * n;
    else if (ch == 'y')
        y = y * n;
    else if (ch == 'z')
        z = z * n;
    else
        cout << "Invalid input" << endl;
}
void vector::mul_all()
{
    int n;
    cout << "Enter scalar value: ";
    cin >> n;
    x = x * n;
    y = y * n;
    z = z * n;
}
void vector::divide()
{
    int n;
    cout << "Enter scalar value: ";
    cin >> n;
    x = x / n;
    y = y / n;
    z = z / n;
}
int main()
{
    vector v1;
    int choice;
    v1.input();
    v1.output();
    cout << "Enter 1 to modify" << endl
         << "Enter 2 to add a scalar" << endl
         << "Enter 3 to multiply a single axis" << endl
         << "Enter 4 to multiply by all axes" << endl
         << "Enter 5 to divide" << endl
         << "Enter your choice: ";
    cin >> choice;
    while (choice != 6)
    {
        switch (choice)
        {
        case 1:
            v1.modify();
            v1.output();
            break;
        case 2:
            v1.add();
            v1.output();
            break;
        case 3:
            v1.mul_single();
            v1.output();
            break;
        case 4:
            v1.mul_all();
            v1.output();
            break;
        case 5:
            v1.divide();
            v1.output();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
        cout << "Enter 1 to modify" << endl
             << "Enter 2 to add a scalar" << endl
             << "Enter 3 to multiply a single axis" << endl
             << "Enter 4 to multiply by all axes" << endl
             << "Enter 5 to divide" << endl
             << "Enter 6 to exit" << endl
             << "Enter your choice: ";
        cin >> choice;
    }
    return 0;
}