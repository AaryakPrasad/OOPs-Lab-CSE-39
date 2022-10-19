#include <iostream>
using namespace std;
class student
{
    private:
        int id;
        char name[50];
        int marks[6];
        int tot_marks;
    public:
        void getdata();
        void showdata();
        void calculate_tot_marks();
};
void student::getdata()
{
    cout << "Enter roll number: ";
    cin >> id;
    cout << "Enter name: ";
    cin.ignore();
    cin.getline(name, 50);
    for (int i=0;i<6;i++)
    {
        cout << "Enter marks for subject "<<i+1<<": ";
        cin >> marks[i];
    }
}
void student::showdata()
{
    cout << "Roll number: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Total marks: " << tot_marks << endl;
}
void student::calculate_tot_marks()
{
    tot_marks = 0;
    for (int i=0;i<6;i++)
        tot_marks = tot_marks + marks[i];
}
int main()
{
    student s1;
    s1.getdata();
    s1.calculate_tot_marks();
    s1.showdata(); 
    return 0;  
}