#include <iostream>
#include <string.h>
using namespace std;
class test
{
    protected:
    int marks[5];
    public:
    test(int mark[5])
    {
        cout<<"Enter marks of 5 subjects : ";
        for(int i=0;i<5;i++)
        {
            cin>>mark[i];
            marks[i]=mark[i];
        }
        
    }
    void displaymarks()
    {
        cout<<"Marks of 5 subjects : ";
        for(int i=0;i<5;i++)
            cout<<marks[i]<<" ";
        cout<<endl;
    }
};
class sports
{
    protected:
    int smarks;
    public:
    sports(int mark)
    {
        cout<<"Enter marks of sports : ";
        cin>>mark;
        smarks=mark;
    }
    void display()
    {
        cout<<"Marks of sports : "<<smarks<<endl;
    }
};
class result: public test,public sports
{
    public:
    result():test(marks),sports(smarks)
    {
        cout<<"Result : "<<endl;
        displaymarks();
        display();
    }
    void percentage()
    {
        float sum=0;
        for(int i=0;i<5;i++)
            sum+=marks[i];
        sum+=smarks;
        cout<<"Total marks : "<<sum<<endl;
        cout<<"Percentage : "<<sum/6<<endl;
    }
};
int main()
{
    int mark[5];
    int smark;
    result r;
    r.display();
    r.percentage();
    return 0;
}