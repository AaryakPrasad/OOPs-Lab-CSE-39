#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class Directory
{
    char Name[20];
    char Address[30];
    char areacode[5];
    char phno[15];
public:
    void reg()
    {
        cout<<"Enter the name: ";
        cin>>Name;
        cout<<"Enter the address: ";
        cin>>Address;
        cout<<"Enter the area code: ";
        cin>>areacode;
        cout<<"Enter the phone number: ";
        cin>>phno;
    }
    void show()
    {
        cout<<"Name: "<<Name<<endl;
        cout<<"Address: "<<Address<<endl;
        cout<<"Area code: "<<areacode<<endl;
        cout<<"Phone number: "<<phno<<endl;
    }
    char *phnum()
    {
        return phno;
    }
    char *area()
    {
        return areacode;
    }
    int checkcode(char AC[])
    {
        return (strcmp(areacode,AC));
    }
};
int main()
{
    int n;
    cout<<"Enter the number of entries: ";
    cin>>n;
    fstream f;
    Directory d[n+2];
    f.open("tele.dat",ios::in|ios::out|ios::ate);
    for(int i=0;i<n;i++)
    {
        d[i].reg();
        f.write((char *)&d[i],sizeof(d[i]));
    }
    cout<<"Sorting according to area code"<<endl;
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++)
            if (d[j].checkcode(d[j+1].area())>0)
            {
                Directory temp;
                temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
            }
    cout<<"Enter new entry: "<<endl;
    d[n].reg();
    f.write((char *)&d[n],sizeof(d[n]));
    cout<<"Enter phone number of the entry to be deleted: ";
    char x[15];
    cin>>x;
    for(int i=0;i<n;i++)
        if (strcmp(d[i].phnum(),x)==0)
        {
            for(int j=i;j<n;j++)
                d[j]=d[j+1];
            break;
        }
        //To do in file
        
    f.close();
    return 0;
    
}