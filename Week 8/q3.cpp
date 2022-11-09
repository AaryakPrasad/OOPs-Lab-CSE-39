#include <iostream>
using namespace std;
class base1
{
    public:
    base1()
    {
        cout<<"Base class 1 constructor"<<endl;
    }
    ~base1()
    {
        cout<<"Base class 1 destructor"<<endl;
    }
};
class base2: public base1
{
    public:
    base2()
    {
        cout<<"Base class 2 constructor"<<endl;
    }
    ~base2()
    {
        cout<<"Base class 2 destructor"<<endl;
    }
};
class derived: public base2
{
    public:
    derived()
    {
        cout<<"Derived class constructor"<<endl;
    }
    ~derived()
    {
        cout<<"Derived class destructor"<<endl;
    }
};
int main()
{
    derived d;
    return 0;
}