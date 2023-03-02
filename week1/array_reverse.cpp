// Write a program to reverse an array
#include <iostream>
using namespace std;

int main()
{
    int arr[10], i, n, temp;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout << "Array after reversing the elements: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}