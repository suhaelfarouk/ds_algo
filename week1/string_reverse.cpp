// Write a program to reverse a string
#include <iostream>
using namespace std;

int main()
{
    char str[10], temp;
    int i, n;

    cout << "Enter the string: ";
    cin >> str;

    for (n = 0; str[n] != '\0'; n++)
    {
        cout << n;
    }

    cout << endl << n << endl;
    
    for (i = 0; i < n / 2; i++)
    {
        temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    cout << "String after reversing the elements: ";
    for (i = 0; i < n; i++)
    {
        cout << str[i];
    }

    return 0;
}