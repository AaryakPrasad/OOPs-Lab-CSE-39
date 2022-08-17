#include <iostream>
#include <string.h>
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
        bool check(char search[30])
        {
            
            if (strcmp(title, search) == 0)
            {
                cout << "Book found"<<endl;
                cout << "Title\tAuthor\tPrice\tNo.of.copies" << endl;
                cout << title << "\t" << authorname << "\t" << price << "\t" << noofcopies << endl;
                return true;
            }
            else
                return false;
        }
        void purchase()
        {
            int num;
            cout << "Enter number of copies you want to purchase:";
            cin >> num;
            if (num <= noofcopies)
            {
                noofcopies = noofcopies - num;
                cout << "Book purchased. Bill:"<<endl;
                cout << "Title\tAuthor\tPrice\tNo.of.copies\tTotal" << endl;
                cout << "-----------------------------------------------------------------------------"<<endl;
                cout << title << "\t" << authorname << "\t" << price << "\t" << num << "\t" << price * num << endl;
                cout << "-----------------------------------------------------------------------------"<<endl;
                cout << "Total=Rs." << price * num << "/-" << endl;
            }
            else
                cout << "Not enough copies";
        }
        void update_stock()
        {
            int num;
            cout << "Enter number of copies you want to add:";
            cin >> num;
            noofcopies = noofcopies + num;
            cout << "Stock updated. Stock:"<<noofcopies<<endl;
        }
        void update_price()
        {
            int num;
            cout << "Enter new price:";
            cin >> num;
            price = num;
            cout << "Price updated. Price:"<<price<<endl;
        }
};
int main()
{
    int n,a,choice;
    cout << "Enter number of books:";
    cin >> n;
    book obj[n];
    for(int i=0;i<n;i++)
        obj[i].getdata();
    char search[30];
    cout << "Enter the book you want to search:";
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        bool a=obj[i].check(search);
        if(a==true)
        {
            cout<<"Enter 1 to purchase\nEnter 2 to update stock\nEnter 3 to update price:\nEnter your choice:";
            cin>>choice;
            while (choice != 4)
            {
                if(choice==1)
                    obj[i].purchase();
                else if(choice==2)
                    obj[i].update_stock();
                else if(choice==3)
                    obj[i].update_price();
                else
                 cout<<"Invalid choice";
            
            cout<<"Enter 1 to purchase\nEnter 2 to update stock\nEnter 3 to update price\nEnter 4 to exit\nEnter your choice:";
            cin>>choice;
            }
        }
        else
            cout << "Book not found";
    }
    return 0;
    
}