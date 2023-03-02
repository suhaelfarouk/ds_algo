// Write a program to transpose a matrix.
#include <iostream>
using namespace std;

int main()
{
    int arr[10][10], i, j, n, m;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> n >> m;

    cout << "Enter the elements of the matrix: ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix before transposing the elements: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix after transposing the elements: " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}