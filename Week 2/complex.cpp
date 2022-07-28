#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
    private:
        int real;
        int imag;
    public:
        void getdata();
        void showdata();
};
void complex::getdata()
{
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> imag;
}
void complex::showdata()
{
    cout << "The complex number is: " << real << "+i" << imag << endl;
}
int main()
{
    int n;
    cout << "Enter the number of complex numbers: ";
    cin >> n;
    complex c1[n];
    for (int i = 0; i < n; i++)
        c1[i].getdata();
    for (int i = 0; i < n; i++)
        c1[i].showdata();
    return 0;
}