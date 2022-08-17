#include <iostream>
using namespace std;
struct date
        {
            int day;
            int month;
            int year;
        };
class age
{
    private:
        int age;
        struct date dob,curr;
        int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    public:
        void input_dob();
        void input_curr();
        void calc_age();
};
void age::input_dob()
{
    cout << "Enter your date of birth:";
    cin >> dob.day >> dob.month >> dob.year;
}
void age::input_curr()
{
    cout << "Enter current date:";
    cin >> curr.day >> curr.month >> curr.year;
}
void age::calc_age()
{
    if (dob.day>curr.day)
    {
        curr.day += month[dob.month-1];
        curr.month--;
    }
    if (dob.month>curr.month)
    {
        curr.year--;
        curr.month += 12;
    }
    int day = curr.day - dob.day;
    int month = curr.month - dob.month;
    int year = curr.year - dob.year;
    cout<<"Present Age is " << year << " years " << month << " months " << day << " days ";
}
int main()
{
    age a1;
    a1.input_curr();
    a1.input_dob();
    a1.calc_age();
    return 0;
}