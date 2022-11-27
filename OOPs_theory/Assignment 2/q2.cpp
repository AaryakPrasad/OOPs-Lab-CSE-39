#include <iostream>
#include <fstream>
using namespace std;
class student{
        int addno;
        char name[90];
        float totalmarks;
    public :
    void getinfo()
    {
        cout<<"Enter the admission number: ";
        cin>>addno;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the total marks: ";
        cin>>totalmarks ;
    }
    void showinfo ()
    {
        cout<<"Admission number: "<<addno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Total marks: "<<totalmarks<<endl;
    }
    float rettotmarks ()
    {
        return totalmarks;
    }
};
int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    fstream f;
    student s[n];
    f.open("student.dat",ios::in|ios::out|ios::ate);
    for(int i=0;i<n;i++)
    {
        s[i].getinfo();
        f.write((char *)&s[i],sizeof(s[i]));
    }
    f.seekg(0,ios::beg);
    cout<<"The students are: "<<endl;
    for(int i=0;i<n;i++)
        if (s[i].rettotmarks()>456 && s[i].rettotmarks()<498)
        {
            s[i].showinfo();
            f.read((char *)&s[i],sizeof(s[i]));
        }
    f.close();
    return 0;
}