#include <iostream>
using namespace std;
class myarr
{
    int *p;
    int size;
public:
    myarr(int s=1)
    {
        cout<<"Enter values into the array:"<<endl;
        size = s;
        p = new int[size];
        for (int i = 0; i < size; i++)
            cin >> p[i];
    }
    void showdata()
    {
        for (int i = 0; i < size; i++)
            cout << p[i] << " ";
        cout << endl;
    }
    myarr operator ++()
    {
        for (int i = 0; i < size; i++)
            ++p[i];
        return *this;
    }
    myarr operator ++(int)
    {
        myarr temp = *this;
        for (int i = 0; i < size; i++)
            p[i]++;
        return temp;
    }
};    
int main()
{
    myarr a(5);
    a.showdata();
    ++a;
    a.showdata();
    a++;
    a.showdata();
}
