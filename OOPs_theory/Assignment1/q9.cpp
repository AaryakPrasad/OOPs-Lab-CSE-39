#include <iostream>
#include <math.h>
using namespace std;
class area_triangle
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
            return 0.5*b*sqrt(a*a-b*b/4);
        }
        double area(float a)
        {
            return sqrt(3)/4*a*a;
        }
};
int main()
{
    area_triangle obj;
    cout<<"Enter 1 to find area of scalene triangle"<<endl<<"Enter 2 to find area of isosceles triangle"<<endl<<"Enter 3 to find area of equilateral triangle"<<endl<<"Enter your choice: ";
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
            cout<<"The area of scalene triangle is: "<<obj.area(obj.a,obj.b,obj.c)<<endl;
            break;
        case 2:
            cout<<"Enter the length of side a: ";
            cin>>obj.a;
            cout<<"Enter the length of side b: ";
            cin>>obj.b;
            cout<<"The area of isosceles triangle is: "<<obj.area(obj.a,obj.b)<<endl;
            break;
        case 3:
            cout<<"Enter the length of side: ";
            cin>>obj.a;
            cout<<"The area of equilateral triangle is: "<<obj.area(obj.a)<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}

