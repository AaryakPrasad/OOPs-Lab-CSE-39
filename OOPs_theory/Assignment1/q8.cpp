#include <iostream>
using namespace std;
class fraction
{
    int numerator;
    int denominator;
    public:
    void getdata();
    void add(fraction,fraction);
    void sub(fraction &f1,fraction &f2);
    void mul(fraction *f1,fraction *f2);
};
void fraction::getdata()
{
    cout<<"Enter the numerator: ";
    cin>>numerator;
    cout<<"Enter the denominator: ";
    cin>>denominator;
}
void fraction::add(fraction f1,fraction f2)
{
    int num,den;
    num=f1.numerator*f2.denominator+f2.numerator*f1.denominator;
    den=f1.denominator*f2.denominator;
    cout<<"The sum of the fractions is: "<<num<<"/"<<den<<endl;
}
void fraction::sub(fraction &f1,fraction &f2)
{
    int num,den;
    num=f1.numerator*f2.denominator-f2.numerator*f1.denominator;
    den=f1.denominator*f2.denominator;
    cout<<"The difference of the fractions is: "<<num<<"/"<<den<<endl;
}
void fraction::mul(fraction *f1,fraction *f2)
{
    int num,den;
    num=f1->numerator * f2->numerator;
    den=f1->denominator * f2->denominator;
    cout<<"The product of the fractions is: "<<num<<"/"<<den<<endl;
}
int main()
{
    fraction f1,f2;
    f1.getdata();
    f2.getdata();
    f1.add(f1,f2);
    f1.sub(f1,f2);
    f1.mul(&f1,&f2);
    return 0;
}