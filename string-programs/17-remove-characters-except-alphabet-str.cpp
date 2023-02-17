// Write a program in Cpp to remove characters in String Except Alphabets.

#include <iostream>
#include <string>
using namespace std;

void removing_except_alphabets(char *ptr1, char *ptr2, int len)
{
    for (int i = 0; i < len; i++)
    {
        if ((*ptr1 >= 'a' && *ptr1 <= 'z') || (*ptr1 >= 'A' && *ptr1 <= 'Z'))
        {
            *ptr2 = *ptr1;
            ptr1++;
            ptr2++;
        }
        else
        {
            ptr1++;
        }
    }
    *ptr2 = '\0';
}

int main()
{
    string str;

    cout << "Input the String: ";
    getline(cin, str);

    cout << "\nGiven String is: " << str << endl;

    removing_except_alphabets(&str[0], &str[0], str.length());
    cout << "\nAfter removing the Output String: ";

    int i = 0;
    while (str[i] != '\0')
    {
        cout << str[i];
        i++;
    }
    cout << endl;
    return 0;
}

/*
Sample Output:

Input the String: www.c-programming-string-programs.com/<.

Given String is: www.c-programming-string-programs.com/<.
After removing the Output String: wwwcprogrammingstringprogramscom
*/