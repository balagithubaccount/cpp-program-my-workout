//Write a Cpp program to replace the spaces of a string with a specific character.

#include <iostream>
using namespace std;
void replace_specific_char(char* ptr,char var)
{
    while(*ptr!='\0')
    {
        if(*ptr == 32)
        {
            *ptr = var;
        }
        ptr++;
    }
}
int main()
{
    string str;
    char var;
    cout << "Input a String: ";
    getline(cin, str);
  
    cout << "Input a replacing character: ";
    cin >> var;
    

    cout << "\nThe given string is:\n" << str << endl;
    cout << "\nThe replacing character is: " << var << endl;

    replace_specific_char(&str[0],var);

    cout << "After replacing the space with '"<< var << "' the new string is:\n\n" << str << endl;

    return 0;
}

/*
Sample Output:

Input a String: Be glad to see the back of Input replace character.
Input a replacing character: +

The given string is:
Be glad to see the back of Input replace character.

The replacing character is: +
After replacing the space with '+' the new string is:

Be+glad+to+see+the+back+of+Input+replace+character.

*/