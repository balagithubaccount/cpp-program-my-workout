// Write a Cpp program to read a string through keyboard and sort it using bubble sort depends only first character .

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size, i, j = 0, bubble;

    string buffer;
    cout << "Input the number of Strings: ";
    cin >> size;
    getline(cin, buffer);
    string str[size];

    for (i = 0; i < size; i++)
    {
        cout << "Input String-" << i + 1 << " :";
        getline(cin, str[i]);
    }

    printf("\nGiven Strings are:\n\n");
    for (i = 0; i < size; i++)
    {
        cout << str[i] << endl;
    }
    cout << endl;

    for (i = 1; i < size; i++)
    {
        for (j = 0; j < size - i; j++)
        {
            if (str[j] > str[j + 1])
            {
                str[j].swap(str[j + 1]);
            }
        }
    }

    cout << "The Strings appears After sorting: \n"
         << endl;
    for (i = 0; i < size; i++)
    {
        cout << str[i] << endl;
    }

    return 0;
}

/*
Sample Output:

Input the number of Strings: 3
Input String-1 :zero
Input String-2 :two
Input String-3 :one

Given Strings are:

zero
two
one

The Strings appears After sorting:

one
two
zero

*/