#include <iostream>
using namespace std;
class complex
{
private:
    float real;
    float imag;
public:
    complex(): real(0), imag(0){}
    complex(float r, float i)
    {
        real = r;
        imag = i;
    }
    ~complex(){}
    void getcomplex()
    {
        cout<<"Enter real part: ";
        cin>>real;
        cout<<"Enter imaginary part: ";
        cin>>imag;
    }
    void showcomplex()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    complex operator + (complex c)
    {
        return complex(real+c.real, imag+c.imag);
    }
    complex operator ++ ()
    {
        return complex(++real, ++imag);
    }
    complex operator ++(int)
    {
        complex temp(real,imag);
        real++;
        imag++;
        return temp;
    }
};
int main()
{
    complex c1(2,3), c2(4,5), c3;
    c3 = c1 + c2;
    cout<<"c1 = ";
    c1.showcomplex();
    cout<<"c2 = ";
    c2.showcomplex();
    cout<<"c3 = ";
    c3.showcomplex();
    ++c3;
    cout<<"c3 = ";
    c3.showcomplex();
    c3++;
    cout<<"c3 = ";
    c3.showcomplex();
    return 0;
}