#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class coordinates
{
    private:
        double x;
        double y;
    public:
        void getdata();
        void distcalc(coordinates p, coordinates q);
};
void coordinates::getdata()
{
    cout << "Enter x coordinates: ";
    cin >> x;
    cout << "Enter y coordinates: ";
    cin >> y;
}
void coordinates::distcalc(coordinates p, coordinates q)
{
    double dist = sqrt(pow((p.x - q.x),2) + pow((p.y - q.y),2));
    cout << "The distance between the two points is: " << dist << endl;
}
int main()
{
    coordinates a,b;
    a.getdata();
    b.getdata();
    a.distcalc(a,b);
}