// Write a Cpp program to print individual characters of string in reverse order.

#include <iostream>
using namespace std;

int strlength(string str)
{
    char *ptr = &str[0];
    int len;
    for (len = 0; *ptr != '\0';)
    {
        len++;
        ptr++;
    }
    return (len);
}
int main()
{
    string str;
    int i, len;

    cout << "Input the string: ";
    getline(cin, str);
    cout << "Given String: " << str << endl;

    len = strlength(str);

    cout << "Reverse order of the given string is: ";

    for (i = len - 1; i >= 0; i--)
        cout << str[i] << " ";

    cout << endl;
    return 0;
}

/*
Sample Output:

Input the string: welcome
Given String: welcome
Reverse order of the given string is: e m o c l e w 
*/