#include <iostream>
using namespace std;
class student
{
    int roll;
    char name[20];
    int age;
    public:
    void getdata()
    {
        cout<<"Enter roll no. : ";
        cin>>roll;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
    }
    void display()
    {
        cout<<"Roll no. : "<<roll<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
class test : public student
{
    protected:
    int marks[5];
    public:
    void getmarks()
    {
        cout<<"Enter marks of 5 subjects : ";
        for(int i=0;i<5;i++)
            cin>>marks[i];
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
    void getdata()
    {
        cout<<"Enter marks of sports : ";
        cin>>smarks;
    }
    void display()
    {
        cout<<"Marks of sports : "<<smarks<<endl;
    }
};
class result: public test,public sports
{
    public:
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
    result r;
    r.student::getdata();
    r.getmarks();
    r.sports::getdata();
    r.student::display();
    r.displaymarks();
    r.percentage();
    return 0;
}