#include <iostream>
#include <fstream>
using namespace std;
class Book
{
int Bno;
char Title[30];
public : 
    void Enter()
    {
        cout<<"Enter the book number: ";
        cin>>Bno;
        cout<<"Enter the title: ";
        cin>>Title;
    }
    void Display()
    {
        cout<<"Book number: "<<Bno<<endl;
        cout<<"Title: "<<Title<<endl;
    }
    int RBno()
    {
        return Bno;
    }
};
int main()
{
    int n;
    cout<<"Enter the number of books: ";
    cin>>n;
    fstream f;
    Book b[n];
    f.open("book.dat",ios::in|ios::out|ios::ate);
    for(int i=0;i<n;i++)
    {
        b[i].Enter();
        f.write((char *)&b[i],sizeof(b[i]));
    }
    f.clear();
    cout<<"Enter book no to be searched: ";
    int x;
    cin>>x;
    f.seekg(0,ios::beg);
    for(int i=0;i<n;i++)
        if (b[i].RBno()==x)
        {
            b[i].Display();
            f.read((char *)&b[i],sizeof(b[i]));
        }
        else
        {
            cout<<"Book not found"<<endl;
        }
    f.close();
    return 0;
}