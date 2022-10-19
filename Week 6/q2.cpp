#include <iostream>
using namespace std;
class time1
{
private:
    int hour;
    int min;
public:
    time1()
    {
        hour = 0;
        min = 0;
    }
    time1(int h, int m=0)
    {
        hour = h;
        min = m;
    }
    time1(const time1 &t)
    {
        hour = t.hour;
        min = t.min;
    }
    ~time1()
    {
        cout << "Destructor called" << endl;
    }
    void display()
    {
        cout << hour << " : " << min << endl;
    }
};
int main()
{
    time1 t1(2);
    time1 t2(t1);
    time1 t3;
    t1.display();
    t2.display();
    t3.display();
}