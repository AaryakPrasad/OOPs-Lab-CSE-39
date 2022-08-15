#include <iostream>
#include <math.h>
using namespace std;
class area_mult
{    
    public:
        float a,b,c;
        double area(float a,float b,float c)
        {
            int ar,s;
            s=(a+b+c)/2;
            return ar=sqrt(s*(s-a)*(s-b)*(s-c));
        }
        double area(float a,float b)
        {
            return a*b;
        }
        double area(float a)
        {
            return 3.1416*a*a;
        }
};
int main()
{
    area_mult obj;
    cout<<"Enter 1 to find area of triangle"<<endl<<"Enter 2 to find area of rectangle"<<endl<<"Enter 3 to find area of circle"<<endl<<"Enter your choice: ";
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
            cout<<"The area of triangle is: "<<obj.area(obj.a,obj.b,obj.c)<<endl;
            break;
        case 2:
            cout<<"Enter the length of side a: ";
            cin>>obj.a;
            cout<<"Enter the length of side b: ";
            cin>>obj.b;
            cout<<"The area of rectangle is: "<<obj.area(obj.a,obj.b)<<endl;
            break;
        case 3:
            cout<<"Enter the radius of circle: ";
            cin>>obj.a;
            cout<<"The area of circle is: "<<obj.area(obj.a)<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}

