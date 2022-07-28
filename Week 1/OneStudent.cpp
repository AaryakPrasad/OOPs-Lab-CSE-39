#include <iostream>
using namespace std;

struct student
{
  char name[50];
  int roll_no;
  float marks[5];
};

int main()
{
  student s1;
  cout << "Enter name: ";
  cin.getline(s1.name, 50);

  cout << "Enter Roll No.: ";
  cin >> s1.roll_no;

  for(int i=0; i<5; i++)
  {
    cout << "Enter marks for subject " << i+1 << ": ";
    cin >> s1.marks[i];
  }

  cout << endl << "DISPLAY" << endl << endl;;
  cout << "NAME: " << s1.name << endl;
  cout << "Roll No.: " << s1.roll_no << endl;

  for(int i=0; i<5; i++)
  {
    cout << "Marks in subject " << i+1 << ": " << s1.marks[i] << endl;
  }
}