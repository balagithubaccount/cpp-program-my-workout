// Write a program to separate the individual characters from a string.

#include <iostream>
using namespace std;

void split_characters(char *ptr)
{
    cout << "The Characters of the string are: ";
    while (*ptr != '\0')
    {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
}

int main()
{
    string str;
    cout << "Input the String: ";
    getline(cin, str);

    cout << "Given string: " << str << endl;
    split_characters(&str[0]);
    return 0;
}

/*
Sample Output:

Input the String: Welcome to the individual characters
Given string: Welcome to the individual characters
The Characters of the string are: W e l c o m e   t o   t h e   i n d i v i d u a l   c h a r a c t e r s

*/