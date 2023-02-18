// Write a Cpp program to Find the Frequency of Characters.

#include <iostream>
using namespace std;

int char_frequency(char *ptr, char var)
{
    int i, count = 0;
    do
    {
        if (*ptr == var)
        {
            count++;
            ptr++;
        }
        else
        {
            ptr++;
        }
    } while (*ptr != '\0');
    return count;
}
int main()
{
    string str;
    char Char;
    int count;

    cout << "Input the string: ";
    getline(cin, str);

    cout << "Inpput the character to find frequency: ";
    cin >> Char;

    cout << "\nThe given string is: " << str << endl;
    cout << "The given character is: " << Char << endl;
    
    count = char_frequency(&str[0], Char);
    cout << "\nThe Frequency of '" << Char << "' is: " << count << endl;
}

/*
Sample Output:

Input the string: This is a test string
Inpput the character to find frequency: i

The given string is: This is a test string
The given character is: i

The Frequency of 'i' is: 3

*/