#include <iostream>
using namespace std;
int main()
{
    char s1[20],s2[20];
    cout<<"Enter the first name: ";
    cin.getline(s1,20);
    cout<<"Enter the last name: ";
    cin.getline(s2,20);
    cout<<"\nThe name is: "<<s2<<" "<<s1;
    return 0;
}