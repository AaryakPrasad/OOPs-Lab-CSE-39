#include <iostream>
using namespace std;
class charac
{
    public:
        int n;
        char x;
        void getdata()
        {
            cout<<"Enter the number of characters: ";
            cin>>n;
            cout<<"Enter the character: ";
            cin>>x;
        }
        void print(char x='*',int n=80)
        {
            for(int i=0;i<n;i++)
                cout<<x;
        }
};
int main()
{
    charac c;
    c.getdata();
    c.print(c.x,c.n);
    return 0;
}