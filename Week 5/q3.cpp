#include<iostream>
using namespace std;
class Data{
		int x;
		static int funInput ;
		static int funOutput ;
	public:
		void input(); 
		void output();
		void display();	
};
int Data::funInput=0;
int Data::funOutput = 0;
void Data::input()
{
    cout<<"Enter the value of x\n";
    cin>>x;
    funInput++;
}
void Data::output()
{
    cout<<"The value of x is "<<x<<endl;
    funOutput++;
}
void Data::display()
{
    cout<<"The input function has been called  "<<funInput<<" times\n";
    cout<<"The output function has been called  "<<funOutput<<" times\n";
}
int main()
{
	Data d1,d2;
	d1.input();
	d1.output();
	d2.input();
	d2.output();
	d1.display();
}
