// Write a program in Cpp to split string by space into words.

#include <iostream>
using namespace std;

int main()
{
    string str, word[20];
    int i, j, k;
    i = j = k = 0;
    cout << "Input a string: ";
    getline(cin, str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            word[j][k] = str[i];
            // cout << word[j][k];
            k++;
        }
        else
        {
            word[j][k] = '\0';
            // cout << " - " << word[j][1] << j+1 << endl;
            j++;
            k = 0;
        }
    }
    cout << "\nThe Given string is:\n" << str << "\n\n";
    cout << "Strings or words after split by space are: \n\n";
    for (i = 0; i <= j; i++)
    {
        for (k = 0; word[i][k] != '\0'; k++)
        {
            cout << word[i][k];
        }
        cout << endl;
    }
    return 0;
}

/*
Sample Output:

Input a string: This is test string only.

The Given string is:
This is test string only.

Strings or words after split by space are: 

This
is
test
string
only.

*/