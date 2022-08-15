#include <iostream>
using namespace std;

class matrix
{
    private:
        int *arr[10];
    public:
        int n;
        void createMagicMatrix(int n);
        void displayMatrix(int n);
};
void matrix::createMagicMatrix(int n=5)
{
    
    for (int i = 0; i < n; i++)
        arr[i] = (int *)malloc(n * sizeof(int));
    cout << "Enter the values into the matrix: " << endl;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            cin >> arr[i][j];
}
void matrix::displayMatrix(int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
            cout << arr[i][j] << "  ";
        cout << endl;
    }
}
int main()
{
    matrix m1;
    cout << "Enter number of rows and columns:";
    cin >> m1.n;
    m1.createMagicMatrix(m1.n);
    m1.displayMatrix(m1.n);
    return 0;
}