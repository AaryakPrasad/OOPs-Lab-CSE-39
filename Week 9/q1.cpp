#include <iostream>
using namespace std;
class dist
{
private:
    int feet;
    float inches;
public:
    dist(): feet(0), inches(0.0){}
    dist(int ft, float in)
    {
        feet = ft;
        inches = in;
    }
    ~dist(){}
    void getdist()
    {
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<"Enter inches: ";
        cin>>inches;
    }
    void showdist()
    {
        cout<<feet<<"\'-"<<inches<<"\"";
    }
    dist operator + (dist d)
    {
        int f = feet + d.feet;
        float i = inches + d.inches;
        if(i>=12.0)
        {
            i -= 12.0;
            f++;
        }
        return dist(f,i);
    }
    dist operator +(int x)
    {
        int f = feet;
        float i = inches+4;
        if(i>=12.0)
        {
            i -= 12.0;
            f++;
        }
        return dist(f,i);
    }
    dist operator --()
    {
        inches--;
        if(inches<0)
        {
            inches += 12.0;
            feet--;
        }
        return dist(feet,inches);
    }
};
int main()
{
    dist d1, d3;
    dist d2(11,6.25);
    d1.getdist();
    d3 = d1 + d2;
    cout<<"d1 = "; d1.showdist(); cout<<endl;
    cout<<"d2 = "; d2.showdist(); cout<<endl;
    cout<<"d3 = "; d3.showdist(); cout<<endl;
    d3 = d1 + 10;
    cout<<"d3 = "; d3.showdist(); cout<<endl;
    --d3;
    cout<<"d3 = "; d3.showdist(); cout<<endl;
    return 0;
}
