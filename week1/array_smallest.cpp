//Write a program to find the smallest element in array.
#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, i, smallest;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    smallest = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "The smallest element is " << smallest << endl;

    return 0;
}