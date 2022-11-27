#include <iostream>
#include <fstream>
using namespace std;
class STUD
{
    int Rno;
    char Name[20];
    public:
    void Enter()
    {
        cout << "Enter Roll No: ";
        cin >> Rno;
        cout << "Enter Name: ";
        cin >> Name;
    }
    void Display()
    {
        cout << "Roll No: " << Rno << endl;
        cout << "Name: " << Name << endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    fstream f;
    STUD s[n+1];
    f.open("stud.dat",ios::in|ios::out|ios::ate);
    for(int i=0;i<n;i++)
    {
        s[i].Enter();
        f.write((char *)&s[i],sizeof(s[i]));
    }
    f.clear();
    cout<<"Add another item: "<<endl;
    s[n].Enter();
    f.write((char *)&s[n],sizeof(s[n]));
    f.seekg(0,ios::beg);
    cout<<"The students are: "<<endl;
    for(int i=0;i<=n;i++)
        {
            s[i].Display();
            f.read((char *)&s[i],sizeof(s[i]));
        }
    f.close();
    return 0;
}
    
