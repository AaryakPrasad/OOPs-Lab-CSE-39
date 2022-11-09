#include <iostream>
#include <string.h>
using namespace std;
class mystring
{
private:
    char* str;
    int len;
public:
    mystring(): str(NULL), len(0){}
    mystring(const char* s)
    {
        len = strlen(s);
        str = new char[len+1];
        strcpy(str,s);
        str[len] = '\0';
    }
    ~mystring()
    {
        delete[] str;
    }
    void showstring()
    {
        cout<<str<<endl;
    }
    mystring operator + (mystring s)
    {
        char* temp = new char[len+s.len+1];
        strcpy(temp,str);
        strcat(temp,s.str);
        return mystring(temp);
    }
};
int main()
{
    mystring s1("Hello"), s2("World"), s3;
    s3 = s1 + s2;
    cout<<"s1 = ";
    s1.showstring();
    cout<<"s2 = ";
    s2.showstring();
    cout<<"s3 = ";
    s3.showstring();
    return 0;
}