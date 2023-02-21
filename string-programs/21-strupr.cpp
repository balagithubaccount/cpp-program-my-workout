// Write a program in Cpp to convert a string to uppercase.

#include <iostream>
using namespace std;

void string_upr(char *ptr)
{
    while (*ptr != '\0')
    {
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr = *ptr - ' ';
            ptr++;
        }
        else
        {
            ptr++;
        }
    }
}

int main()
{
    string str;

    cout << "Input the String in lowercase: ";
    getline(cin, str);
    cout << "\nGiven String is: " << str << endl;
    string_upr(&str[0]);
    cout << "Here is the above string in UPPERCASE: " << str << endl;

    return 0;
}

/*
Sample Output:

Input the String in lowercase: the quick brown fox jumps over the lazy dog.

Given String is: the quick brown fox jumps over the lazy dog.
Here is the above string in UPPERCASE: THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG.

*/