// Write a program in Cpp to read a file and remove the spaces between two words of its content.

#include <iostream>
#include <string>
using namespace std;
void remove_spaces(char str[], int len)
{
    cout << "\nThe Given string is: \n"
         << str << endl;
    int i, j, count = 1;

    while (count != 0)
    {
        count = 0;
        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == ' ')
            {
                count++;
                for (j = i; j <= len; j++)
                {
                    str[j] = str[j + 1];
                }
            }
        }
    }
    cout << "\nAfter removing the spaces the content is: \n"
         << str << endl;
}
int main()
{
    string str;
    cout << "Input a String: ";
    getline(cin, str);

    remove_spaces(&str[0], str.length());

    return 0;
}
/*
Sample Output:

Input a String: This is test string

The Given string is:
This is test string

After removing the spaces the content is:
Thisisteststring

*/