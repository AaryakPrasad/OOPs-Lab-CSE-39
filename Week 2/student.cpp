#include <iostream>
using namespace std;
class student
    {
        private:
            int id;
            char name[50];
            int tot_marks;
        public:
            void getdata();
            void showdata();
    };
void student::getdata()
{
    cout << "Enter roll number: ";
    cin >> id;
    cout << "Enter name: ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "Enter total marks: ";
    cin >> tot_marks;
}
void student::showdata()
{
    cout << "Roll number: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Total marks: " << tot_marks << endl;

}
int main()
{
    student s1;
    s1.getdata();
    s1.showdata(); 
    return 0;  
}