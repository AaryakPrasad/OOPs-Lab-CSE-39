#include <iostream>
using namespace std;
int main()
{
    int n,sum_even=0,sum_odd=0;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
        if(a[i]%2==0)
            sum_even+=a[i];
        else
            sum_odd+=a[i];

    cout<<"The sum of even elements is: "<<sum_even<<endl;
    cout<<"The sum of odd elements is: "<<sum_odd<<endl;
    
    return 0;
}