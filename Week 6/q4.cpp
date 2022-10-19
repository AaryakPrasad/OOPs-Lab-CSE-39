#include <iostream>
using namespace std;
class test
{
private:
    int x;
    static int count;
public:
    test(int a=0)
    {
        a=x;
        count++;
    }
    static void showcount()
    {
        cout<<"Number of objects created is "<<count<<endl;
    }
};
int test::count=0;
int main()
{
    test t1;
    test t2(10);
    test t3(15);
    test::showcount();
    return 0;
}