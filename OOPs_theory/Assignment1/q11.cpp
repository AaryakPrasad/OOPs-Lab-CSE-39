#include <iostream>
using namespace std;
class book
{
    char title[30];
    char authorname[30];
    int price;
    int noofcopies;
    public:
        void getdata()
        {
            cout<<"Enter the title: ";
            cin>>title;
            cout<<"Enter the author: ";
            cin>>authorname;
            cout<<"Enter the price: ";
            cin>>price;
            cout<<"Enter the number of copies: ";
            cin>>noofcopies;
        }
        void showdata()
        {
            cout<<title<<"\t"<<authorname<<"\t"<<price<<"\t"<<noofcopies<<endl;
        }
};
// to be completed