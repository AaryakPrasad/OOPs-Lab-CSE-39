#include <iostream>
using namespace std;
int main()
{
    int n1,n2,r=0,sum[16],i=0;
    cout<<"Enter First Binary Number: ";
    cin>>n1;
    cout<<"Enter Second Binary Number: ";
    cin>>n2;
    cout<<endl<<n1<<" + "<<n2<<" = ";

    while(n1 !=0 || n2 !=0)
    {
        sum[i] = (n1 % 10 + n2 % 10 + r) % 2;
        r = (n1 % 10 + n2 % 10 + r) / 2;
        n1 = n1/10;
        n2 = n2/10;
        i++;
    }
    if(r!=0)
    {   
        sum[i] = r;
        i++;
    }

    for(int j=i-1;j>=0;j--)
        cout<<sum[j];
    return 0;
}