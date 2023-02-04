// Write a Cpp program to compare two strings without using string library functions.

#include <iostream>
using namespace std;

int stringlen(string str)
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
int strcmpr(string str1, string str2)
{
    int len1, len2;
    len1 = stringlen(str1);
    len2 = stringlen(str2);
    if (len1 != len2)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i < len1; i++)
        {
            if (str1[i] != str2[i])
            {
                return 1;
            }
        }
        return 0;
    }
}

int main()
{
    int temp;
    string str1, str2;

    cout << "Input the 1st String: ";
    getline(cin, str1);

    cout << "Input the 2nd String: ";
    getline(cin, str2);

    cout << "String-1: " << str1 << endl;
    cout << "String-2: " << str2 << endl;

    temp = strcmpr(str1, str2);
    if (temp == 0)
    {
        printf("Strings are 'Equal'.\n");
    }
    else
    {
        printf("Strings are 'Not Equal'.\n");
    }
}

/*
Sample Output:1

Input the 1st String: aabbcc
Input the 2nd String: abcdef
String-1: aabbcc
String-2: abcdef
Strings are 'Not Equal'.


Sample Output:2

Input the 1st String: aabbcc
Input the 2nd String: aabbcc
String-1: aabbcc
String-2: aabbcc
Strings are 'Equal'.
*/