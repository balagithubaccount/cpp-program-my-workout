// Write a Cpp programming to find the longest Palindromic substring from a given string. 

#include <iostream>
#include <string>
using namespace std;

void long_palindrom(string str, int l)
{
    cout << "Given string is: " << str << endl;

    int i, j, k = 0, m, n, temp, start = 0, end = 0, max_start = 0, max_end = 0, diff = 0;

    for (i = k; i < l; i++)
    {
        for (j = l; i < j; j--)
        {
            if (str[i] == str[j]) 
            {
                temp = 1;
                start = i;
                end = j;
                for (m = i + 1, n = j - 1; m < n; m++, n--)
                {
                    if (str[m] != str[n])
                    {
                        start = end = 0;
                        break;
                    }
                }
            }
            if (diff < (end - start) && temp == 1)
            {
                diff = end - start;
                max_start = i;
                max_end = j;
                temp = 0;
            }
        }
    }

    cout << "Longest Palindromic substring is: ";
    for (i = max_start; i <= max_end; i++)
    {
        cout << str[i];
    }
    cout << endl;
}
int main()
{
    string str;

    cout << "Input a String: ";
    getline(cin, str);

    if (str.length() != 0)
    {
        long_palindrom(str, str.length() - 1);
    }
    else
    {
        cout << "No String Found" << endl;
    }

    return 0;
}

/*

Sample Output:1

Input a String: abcdcsd
Given string is: abcdcsd
Longest Palindromic substring is: cdc

Sample Output:2

Input a String: abcdcsdfabbccb
Given string is: abcdcsdfabbccb
Longest Palindromic substring is: bccb

Sample Output:3

Input a String:
No String Found

*/