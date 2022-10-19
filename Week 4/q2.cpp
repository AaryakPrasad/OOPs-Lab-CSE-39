#include <iostream>
using namespace std;
void print(int x,int y)
{
    cout << "x = " << x << " y = " << y << endl;
}
int main()
{
    int x=0,y=1;
    print(x,++x);
    print(x,++y);
}