// Write a program in Cpp to print a string in reverse using a pointer.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, revstr;
    char *strptr, *revptr;
    strptr = &str[0];
    revptr = &revstr[0];
    cout << "Input a string: ";
    getline(cin, str);
    int n = str.length();

    while (n >= 0)
    {
        *(revptr++) = *(strptr + (--n));
    }

    *(revptr) = '\0';

    cout << "Reverse of the string is: ";

    for (int i = 0; i < str.length(); i++)
        cout << revstr[i];
    cout << endl;
}

/*
Sample Output:

Input a string: Hello World!
Reverse of the string is: !dlroW olleH

*/