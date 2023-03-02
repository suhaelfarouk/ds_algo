//Write a program to insert elements in array
#include <iostream>
using namespace std;

int main()
{
    int arr[10], i, n, pos, ele;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the position where you want to insert the element: ";
    cin >> pos;
    cout << "Enter the element you want to insert: ";
    cin >> ele;
    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ele;

    cout << "Array after inserting the element: ";
    for (i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}