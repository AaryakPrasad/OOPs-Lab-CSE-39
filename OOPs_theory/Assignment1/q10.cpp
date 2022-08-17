#include <iostream>
#include <math.h>
using namespace std;
class perimeter_mult
{    
    public:
        float a,b,c;
        double perimeter(float a,float b,float c)
        {
            return a+b+c;
        }
        double perimeter(float a,float b)
        {
            return a+b;
        }
        double perimeter(float a)
        {
            return 3.1416*2*a;
        }
};
int main()
{
    perimeter_mult obj;
    cout<<"Enter 1 to find perimeter of triangle"<<endl<<"Enter 2 to find perimeter of rectangle"<<endl<<"Enter 3 to find perimeter of circle"<<endl<<"Enter your choice: ";
    int ch;
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"Enter the length of side a: ";
            cin>>obj.a;
            cout<<"Enter the length of side b: ";
            cin>>obj.b;
            cout<<"Enter the length of side c: ";
            cin>>obj.c;
            cout<<"The perimeter of triangle is: "<<obj.perimeter(obj.a,obj.b,obj.c)<<endl;
            break;
        case 2:
            cout<<"Enter the length of side a: ";
            cin>>obj.a;
            cout<<"Enter the length of side b: ";
            cin>>obj.b;
            cout<<"The perimeter of rectangle is: "<<obj.perimeter(obj.a,obj.b)<<endl;
            break;
        case 3:
            cout<<"Enter the radius of circle: ";
            cin>>obj.a;
            cout<<"The perimeter of circle is: "<<obj.perimeter(obj.a)<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}

