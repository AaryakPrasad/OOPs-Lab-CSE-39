#include <iostream>
#include <string.h>
using namespace std;
class mystring
{
private:
    char *str;
    int l;
public:
    mystring()
    {
        str = new char;
        l = 0;
    }
    mystring(const char *s)
    {
        l = strlen(s);
        str = new char[l+1];
        strcpy(str, s);
    }
    mystring(const mystring &s)
    {
        l = s.l;
        str = new char[l+1];
        strcpy(str, s.str);
    }
    ~mystring()
    {
        delete str;
    }
    void display()
    {
        cout << str << endl;
    }
    mystring join(mystring s1,mystring s2)
    {
        mystring s3;
        s3.l = s1.l + s2.l;
        s3.str = new char[s3.l+1];
        strcpy(s3.str, s1.str);
        strcat(s3.str, s2.str);
        s3.str[s3.l] = '\0';
        return s3;
    }
};
int main()
{
    mystring s1("Hello");
    mystring s2("World");
    mystring s3;
    s3 = s3.join(s1, s2);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}