#include <iostream>
using namespace std;
class bill
{
    char code[10];
    char name[30];
    int price;
    int quantity;
    int total;
    public:
        void getdata()
        {
            cout<<"Enter the code: ";
            cin>>code;
            cout<<"Enter the name: ";
            cin>>name;
            cout<<"Enter the price: ";
            cin>>price;
            cout<<"Enter the quantity: ";
            cin>>quantity;
        }
        void showdata()
        {
            cout<<code<<"\t"<<name<<"\t"<<price<<"\t"<<quantity<<"\t"<<price*quantity<<endl;
        }
        int total_calc()
        {
            return (price*quantity);    
        }
};
int main()
{
    int n,net,a;
    cout << "Enter number of items for which bill has to be generated:" << endl;
    cin >> n;
    bill obj[n];
    for(int i=0;i<n;i++)
    {
        obj[i].getdata();
    }
    cout << "Sl.No.\tCode\tName\tPrice\tQuantity\tTotal" << endl;
    cout << "-----------------------------------------------------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<"\t";
        obj[i].showdata();
    }
    cout << "-----------------------------------------------------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        a=obj[i].total_calc();
        net+=a;
    }
    cout<<"Total=Rs."<<net<<"/-"<<endl;
    return 0;
}