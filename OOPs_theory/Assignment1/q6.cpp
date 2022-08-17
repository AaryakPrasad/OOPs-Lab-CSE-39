#include <iostream>
using namespace std;
class student
{
public:
    int id;
    char name[50];
    int marks;
    void getdata();
    void showdata();
    void sort(student s, int n);
};
void student::getdata()
{
    cout << "Enter roll number: ";
    cin >> id;
    cout << "Enter name: ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "Enter total marks: ";
    cin >> marks;
}
void student::showdata()
{
    cout << "Roll number: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Total marks: " << marks << endl;
}
int main()
{
    int n,avg,count_above=0,count_below=0;
    cout << "Enter number of students: ";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
        s[i].getdata();
    for (int i = 0; i < n; i++)
        s[i].showdata();
    for (int i = 0; i < n; i++)
        avg+=s[i].marks;
        avg=avg/n;
        cout << "The average marks of the students is:" << avg;

    for (int i = 0; i < n; i++)
        if (s[i].marks > avg)
            count_above++;
        else
            count_below++;
    cout << "\nNumber of students above average: " << count_above << endl;
    cout << "\nNumber of students below average: " << count_below << endl;
    
    student temp;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n-i-1; j++)
            if (s[j].marks > s[j+1].marks)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
    
    cout << "The name of the student with the highest marks is" << s[n-1].name << endl;
    cout << "The roll no. of the student with the lowest marks is" << s[0].id << endl;
    return 0;
        
}
