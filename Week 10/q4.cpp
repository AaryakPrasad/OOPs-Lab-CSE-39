#include <iostream>
using namespace std;
class Base
{
    public:
    void print()
    {
        cout<<"\n PRINT-BASE CLASS ";
    }
    virtual void show()=0;
};
class Derived: public Base
{ 
    public:
    void print()
    {
        cout<<"\n PRINT-DERIVED CLASS";
    }
    void show()
    {
        cout<<"\n SHOW-DERIVED CLASS";
    }
};
int main()
{
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->print();
    bptr->show();
    return 0;
}