#include <iostream>
using namespace std;
class book;
void display(book b,int n,int lower,int upper);
class book
{
    string book_name,author_name;
    float price;
    public:
    void getdata()
    {
        cout<<"Enter the name of the book"<<endl;
        cin>>book_name;
        cout<<"Enter the name of the author"<<endl;
        cin>>author_name;
        cout<<"Enter the price of the book"<<endl;
        cin>>price;
    }
    friend void display(book b,int n,int lower,int upper);
};
void display(book b,int n,int lower,int upper)
{
    if(b.price>=lower && b.price<=upper)
    {
        cout<<"Book name:"<<b.book_name<<endl;
        cout<<"Author name:"<<b.author_name<<endl;
        cout<<"Price:"<<b.price<<endl;
    }
}
int main()
{
    cout<<"Enter number of books:";
    int n;
    cin>>n;
    book b[n];
    for(int i=0;i<n;i++)
    b[i].getdata();
    float upper,lower;
    cout<<"Enter upper price range:";
    cin>>upper;
    cout<<"Enter lower price range:";
    cin>>lower;
    for(int i=0;i<n;i++)
    display(b[i],n,lower,upper);
    return 0;
}