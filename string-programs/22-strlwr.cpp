//Write a program in Cpp to convert a string to lowercase.

#include <iostream>
using namespace std; 

void string_lwr(char *ptr)
{
    while(*ptr!='\0')
    {
        if(*ptr>='A' && *ptr <= 'Z')
        {
            *ptr = *ptr + ' ';
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
    cout << "Input the String in UPPERCASE: ";
    getline(cin, str);
    

    cout << "\nGiven String is: " << str << endl;
    string_lwr(&str[0]);
    cout << "Here is the above string in lowercase: " << str << endl;
}

/*
Sample Output:

Input the String in UPPERCASE: THIS QUICK BROWN FOX JUMPS OVER THE LAZY DOG.

Given String is: THIS QUICK BROWN FOX JUMPS OVER THE LAZY DOG.
Here is the above string in lowercase: this quick brown fox jumps over the lazy dog.

*/
