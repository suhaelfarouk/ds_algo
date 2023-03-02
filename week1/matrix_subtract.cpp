//Write a program to subtract two matrices.
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, m, n;

    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    cout << "Enter the elements of the first matrix: " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter the elements of the second matrix: " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "The difference of the two matrices is: " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}