#include <iostream>
using namespace std;
class shape
{
    public:
        virtual int area() = 0;
};
class square : public shape
{
    private:
        int l;
    public:
        square()
        {
            cout << "Enter length of side: ";
            cin >> l;
        }
        int area()
        {
            return l * l;
        }
};
class triangle : public shape
{
    private:
        int b, h;
    public:
        triangle()
        {
            cout << "Enter base and height: ";
            cin >> b >> h;
        }
        int area()
        {
            return 0.5 * b * h;
        }
};
class circle : public shape
{
    private:
        int r;
    public:
        circle()
        {
            cout << "Enter radius: ";
            cin >> r;
        }
        int area()
        {
            return 3.14 * r * r;
        }
};
int main()
{
    shape *p[3];
    square s;
    triangle t;
    circle c;
    p[0] = &s;
    p[1] = &t;
    p[2] = &c;
    for (int i = 0; i < 3; i++)
        cout << "Area: " << p[i]->area() << endl;
    return 0;
}