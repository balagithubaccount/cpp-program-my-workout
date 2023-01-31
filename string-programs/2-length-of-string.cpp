// Write a program to find the length of a string without using library function.

#include <iostream>
using namespace std;

int strlength(string s)
{
    char *ptr = &s[0];
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}
int main()
{
    string str;

    cout << "Input the string:  ";
    getline(cin, str);
    cout << "Length of the string is:  " << strlength(str) << endl;

    return 0;
}

/*

Sample Output:
Input the string:  School
Length of the string is:  6

*/
