#include <iostream>
using namespace std;
class mytime
{
    private:
        int hour;
        int min;
        int sec;
    public:
    mytime()
    {
        hour = 0;
        min = 0;
        sec = 0;
    }
    mytime(int h, int m, int s)
    {
        hour = h;
        min = m;
        sec = s;
    }
    void gettime()
    {
        cout<<"Enter hour: ";
        cin>>hour;
        cout<<"Enter minute: ";
        cin>>min;
        cout<<"Enter second: ";
        cin>>sec;
    }
    void showtime()
    {
        cout<<hour<<":"<<min<<":"<<sec<<endl;
    }
    mytime operator + (mytime t)
    {
        int h = hour + t.hour;
        int m = min + t.min;
        int s = sec + t.sec;
        if(s>=60)
        {
            s -= 60;
            m++;
        }
        if(m>=60)
        {
            m -= 60;
            h++;
        }
        return mytime(h,m,s);
    }
    void operator == (mytime t)
    {
        if(hour == t.hour && min == t.min && sec == t.sec)
            cout<<"Equal";
        else
            cout<<"Not equal";
    }
};
int main()
{
    mytime t1(10,20,30);
    mytime t2(10,20,30);
    mytime t3;
    t3 = t1 + t2;
    t3.showtime();
    t1==t2;
    return 0;
}