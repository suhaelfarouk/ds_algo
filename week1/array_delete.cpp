// Write a program to delete elements from an array


#include <iostream>
using namespace std;

int main()
{
    int arr[10], i, n, pos;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the position where you want to delete the element: ";
    cin >> pos;
    for (i = pos - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    cout << "Array after deleting the element: ";
    for (i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}