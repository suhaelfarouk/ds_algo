// Write a program to compare two strings.
#include <iostream>
using namespace std;

int main()
{
    char str1[10], str2[10];
    int i, n1, n2, flag = 0;

    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    for (n1 = 0; str1[n1] != '\0'; n1++)
    {
    }
    for (n2 = 0; str2[n2] != '\0'; n2++)
    {
    }

    if (n1 == n2)
    {
        for (i = 0; i < n1; i++)
        {
            if (str1[i] != str2[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "The strings are equal" << endl;
        }
        else
        {
            cout << "The strings are not equal" << endl;
        }
    }
    else
    {
        cout << "The strings are not equal" << endl;
    }

    return 0;
}