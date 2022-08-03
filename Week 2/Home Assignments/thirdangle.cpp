#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int x,y;
    cout << "Enter the value of first angle of the triangle: ";
    cin >> x;
    cout << "Enter the value of second angle of the triangle: ";
    cin >> y;
    cout << "The value of third angle of the triangle: " << 180 - x - y << endl;
    return 0;
}