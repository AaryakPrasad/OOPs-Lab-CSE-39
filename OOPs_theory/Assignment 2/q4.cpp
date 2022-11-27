#include <iostream>
#include <fstream>
using namespace std;
class Applicant
{
    char Rno[10];
    char name[30];
    int A_score;
    public:
    void enroll()
    {
        cout<<"Enter the roll number: ";
        cin>>Rno;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the aggregate score: ";
        cin>>A_score;
    }
    void Status()
    {
        cout<<"Roll number: "<<Rno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Aggregate score: "<<A_score<<endl;
    }
    int ReturnScore()
    {
        return A_score;
    }
};
int main()
{
    int n;
    cout<<"Enter the number of applicants: ";
    cin>>n;
    fstream f;
    Applicant a[n];
    f.open("apply.dat",ios::in|ios::out|ios::ate);
    for(int i=0;i<n;i++)
    {
        a[i].enroll();
        f.write((char *)&a[i],sizeof(a[i]));
    }
    f.seekg(0,ios::beg);
    cout<<"The applicants are: "<<endl;
    for(int i=0;i<n;i++)
        if (a[i].ReturnScore()>70)
        {
            a[i].Status();
            f.read((char *)&a[i],sizeof(a[i]));
        }
    f.close();
    return 0;
}