//Write a program to find the largest element in an array
#include <iostream>
using namespace std;

int main()
{
    int arr[10], i, n, largest;

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    largest = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest element in the array: " << largest << endl;

    return 0;
}