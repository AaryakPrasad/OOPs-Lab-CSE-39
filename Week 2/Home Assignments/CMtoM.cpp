#include <iostream>
using namespace std;
int main()
{
    float cm,m,km;
    cout << "Enter the value in cm: ";
    cin >> cm;
    m = cm / 100;
    km = m / 1000;
    cout << "The value in m is: " << m << endl;
    cout << "The value in km is: " << km << endl;
    return 0;
}