#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class DRINKS
{
    int DCODE;
    char DNAME[30];
    int DSIZE;
    float DPRICE;
    public:
    void getdrinks( )
    {
        cout<<"Enter the drink code: ";
        cin>>DCODE;
        cout<<"Enter the drink name: ";
        cin>>DNAME;
        cout<<"Enter the drink size: ";
        cin>>DSIZE;
        cout<<"Enter the drink price: ";
        cin>>DPRICE;
    }
    void showdrinks( )
    {
        cout<<"Drink code: "<<DCODE<<endl;
        cout<<"Drink name: "<<DNAME<<endl;
        cout<<"Drink size: "<<DSIZE<<endl;
        cout<<"Drink price: "<<DPRICE<<endl;
    }
    char *getname()
    {
        return DNAME;
    }
};
int main( )
{
    int n;
    cout<<"Enter the number of drinks: ";
    cin>>n;
    fstream f;
    DRINKS D[n];
    f.open("DRINKS.dat",ios::in|ios::out|ios::ate);
    for(int i=0;i<n;i++)
    {
        D[i].getdrinks();
        f.write((char *)&D[i],sizeof(D[i]));
    }
    f.seekg(0,ios::beg);
    cout<<"The drinks are: "<<endl;
    for(int i=0;i<n;i++)
        if (strcmp(D[i].getname(),"COCA-COLA")==0)
        {
            D[i].showdrinks();
            f.read((char *)&D[i],sizeof(D[i]));
        }
    f.close();
    return 0;
}
