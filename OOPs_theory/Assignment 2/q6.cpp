#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class PROD
{
    char PCODE[10];
    char DESC[10];
    int stock;
    public:
    void Enter()
    {
        cout<<"Enter the product code: ";
        cin>>PCODE;
        cout<<"Enter the description: ";
        cin>>DESC;
        cout<<"Enter the stock: ";
        cin>>stock;
    }
    void Display()
    {
        cout<<"Product code: "<<PCODE<<endl;
        cout<<"Description: "<<DESC<<endl;
        cout<<"Stock: "<<stock<<endl;
    }
    char *pcode()
    {
        return PCODE;
    }
    void update(int x)
    {
        stock=x;
    }
};
int main()
{
    int n,y;
    cout<<"Enter the number of products: ";
    cin>>n;
    fstream f;
    PROD p[n];
    f.open("prod.dat",ios::in|ios::out|ios::ate);
    for(int i=0;i<n;i++)
    {
        p[i].Enter();
        f.write((char *)&p[i],sizeof(p[i]));
    }
    f.clear();
    cout<<"Enter product code to be updated:";
    char x[10];
    cin>>x;
    f.seekg(0,ios::beg);
    for(int i=0;i<n;i++)
        if (strcmp(p[i].pcode(),x)==0)
        {
            p[i].Display();
            cout<<"Enter the new stock: ";
            cin>>y;
            p[i].update(y);
            f.write((char *)&p[i],sizeof(p[i]));
        }
        else
        {
            cout<<"Product not found"<<endl;
        }
    f.seekg(0,ios::beg);
    for(int i=0;i<n;i++)
    {
        p[i].Display();
        f.read((char *)&p[i],sizeof(p[i]));
    }
    f.close();
    return 0;
}