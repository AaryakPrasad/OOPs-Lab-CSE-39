#include <iostream>
using namespace std;
class complex
{
private:
    float real;
    float imag;
public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(float r, float i)
    {
        real = r;
        imag = i;
    }
    complex(const complex &c)
    {
        real = c.real;
        imag = c.imag;
    }
    ~complex()
    {
        cout << "Destructor called" << endl;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main()
{
    complex c1(2, 3);
    complex c2(c1);
    complex c3 = c1;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}