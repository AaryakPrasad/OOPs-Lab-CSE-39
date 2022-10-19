#include <iostream>
using namespace std;
class calc
{
    int n;
    public:
        void getdata()
        {
            cout<<"Enter the number: ";
            cin>>n;
        }
        inline int square()
        {
            return n*n;
        }
        inline int cube()
        {
            return n*n*n;
        }
};
int main()
{
    calc c;
    c.getdata();
    cout<<"Square of the number is: "<<c.square()<<endl;
    cout<<"Cube of the number is: "<<c.cube()<<endl;
    return 0;
}