// Write a program in Cpp to read a sentence and replace lowercase characters by uppercase and vice-versa.

#include <iostream>
using namespace std;

void lower_to_upper(char *ptr)
{
    *ptr = *ptr - ' ';
}
void upper_to_lower(char *ptr)
{
    *ptr = *ptr + ' ';
}
int main()
{
    string str;
    cout << "Input the string: ";
    getline(cin, str);
    cout << "\nThe Given string is: " << str << endl;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            upper_to_lower(&str[i]);
        }
        else if (str[i] >= 97 && str[i] <= 122)
        {
            lower_to_upper(&str[i]);
        }
    }
    cout << "After Case changed the string is: " << str << endl;

    return 0;
}
/*
Sample Output:

Input the string: PyThon

The Given string is: PyThon
After Case changed the string is: pYtHON
*/