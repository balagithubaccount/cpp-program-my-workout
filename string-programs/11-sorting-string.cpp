// Write a Cpp program to sort a string array in ascending order.

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str;
    char small_char, temp, i, j;
    cout << "Input the String: ";
    getline(cin, str);
    cout << "Given String: " << str << endl;
    int len = strlen(&str[0]);
    small_char = str[0];
    for (i = '\0'; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    cout << "After sorting the string appears: " << str << endl;

    return 0;
}

/*
Sample Output:

Input the String: bird
Given String: bird
After sorting the string appears: bdir
*/