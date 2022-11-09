#include <iostream>
using namespace std;
class Arr
{
    static int i;
    int* arr;
public:
    int maxsize;
    Arr(int s = 100)
    {
        arr = new int[s] {0};
        maxsize = s;
        i = 0;

    }
    int& operator[](int i)
    {
        return arr[i];
    }
    friend istream& operator >>(istream& , Arr& a);
    friend ostream& operator <<(ostream& ,const Arr& a);
};
ostream& operator <<(ostream& output,const Arr& a)
{
    for (int i = 0; i < a.maxsize; i++)
    {
        cout << a[i] << ' ';
    }
    return output;
}

istream& operator >>(istream& input, Arr& a)
{
    int value = 0;
    cout << "Enter value: ";
    cin >> a[Arr::i];
    cout << a[Arr::i] << endl;
    return input;
}
int main()
{
    Arr a(5);
    cin >> a[5];        
    cout << a[5];       
    return 0;
}