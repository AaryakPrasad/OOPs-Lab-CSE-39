#include <iostream>
using namespace std;
class polynomial
{
private:
    int coeff[20];
    int degree;

public:
    void input();
    void output();
    void poly_add(polynomial p1, polynomial p2);
    void poly_mul(polynomial p1, polynomial p2);
};
void polynomial::input()
{
    cout << "Enter degree of polynomial: ";
    cin >> degree;
    for (int i = 0; i <= degree; i++)
    {
        cout << "Enter coefficient of x^" << i << ": ";
        cin >> coeff[i];
    }
}
void polynomial::output()
{
    for (int i = degree; i >= 0; i--)
    {
        if (coeff[i] != 0)
        {
            if (i == 0)
                cout << coeff[i];
            else if (i == 1)
                cout << coeff[i] << "x +";
            else
                cout << coeff[i] << " x^" << i << " +";
        }
    }
    cout << endl;
}
void polynomial::poly_add(polynomial p1, polynomial p2)
{
    int num, sum[20];
    if (p1.degree > p2.degree)
        num = p1.degree;
    else
        num = p2.degree;
    for (int i = 0; i <= num; i++)
        sum[i] = p1.coeff[i] + p2.coeff[i];
    cout << "Sum of polynomials: ";
    for (int i = p1.degree; i >= 0; i--)
    {
        if (sum[i] != 0)
        {
            if (i == 0)
                cout << sum[i];
            else if (i == 1)
                cout << sum[i] << "x +";
            else
                cout << sum[i] << " x^" << i << " +";
        }
    }
    cout << endl;
}
void polynomial::poly_mul(polynomial p1, polynomial p2)
{
    int prod[p1.degree + p2.degree - 1];
    for (int i = 0; i < p1.degree + p2.degree - 1; i++)
        prod[i] = 0;
    for (int i = 0; i <= p1.degree; i++)
        for (int j = 0; j <= p2.degree; j++)
            prod[i + j] += p1.coeff[i] * p2.coeff[j];

    cout << "Product of polynomials: ";
    for (int i = p1.degree + p2.degree; i >= 0; i--)
    {
        if (prod[i] != 0)
        {
            if (i == 0)
                cout << prod[i];
            else if (i == 1)
                cout << prod[i] << "x +";
            else
                cout << prod[i] << " x^" << i << " +";
        }
    }
    cout << endl;
}
int main()
{
    int choice;
    polynomial p1, p2;
    cout << "Enter 1 to create/edit polynomial" << endl
         << "Enter 2 to add polynomials" << endl
         << "Enter 3 to multiply polynomials" << endl
         << "Enter your choice: ";
    cin >> choice;
    while (choice != 4)

    {
        switch (choice)
        {
        case 1:
            p1.input();
            p2.input();
            break;
        case 2:
            p1.poly_add(p1, p2);
            break;
        case 3:
            p1.poly_mul(p1, p2);
            break;

        default:
            cout << "Invalid choice";
            break;
        }
        cout << "Enter 1 to create/edit polynomial" << endl
             << "Enter 2 to add polynomials" << endl
             << "Enter 3 to multiply polynomials" << endl
             << "Enter your choice: ";
        cin >> choice;
    }
}