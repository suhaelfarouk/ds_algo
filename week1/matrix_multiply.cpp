// Write a program to multiply two matrices.
#include <iostream>
using namespace std;

int main()
{
    int arr1[10][10], arr2[10][10], arr3[10][10], i, j, k, n, m, p, q;
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> n >> m;
    cout << "Enter the elements of the first matrix: ";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> p >> q;
    cout << "Enter the elements of the second matrix: ";
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            cin >> arr2[i][j];
        }
    }
    
    if (m != p)
    {
        cout << "The matrices cannot be multiplied";
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < q; j++)
            {
                arr3[i][j] = 0;
                for (k = 0; k < m; k++)
                {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        cout << "Matrix after multiplying the elements: " << endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < q; j++)
            {
                cout << arr3[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}