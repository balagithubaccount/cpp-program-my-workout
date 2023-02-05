 //Write a Cpp program to count total number of alphabets, digits and special characters in a string.

#include <iostream>
using namespace std;

void count_letters_digits_special_char(char *ptr)
{
    int alphabet = 0, digit = 0, special_char = 0;

    while (*ptr != '\0' && *ptr != '\n')
    {
        if ((*ptr >= 97 && *ptr <= 122) || (*ptr >= 65 && *ptr <= 90))
        {
            alphabet++;
        }
        else if (*ptr >= 48 && *ptr <= 57)
        {
            digit++;
        }
        else
        {
            special_char++;
        }
        ptr++;
    }
    cout << "\nNumber of Alphabets in the string is: "<< alphabet << endl;
    cout << "Number of Digits in the string is: " << digit << endl;
    cout << "Number of Special characters in the stringis: " << special_char << endl;
}
int main()
{
    string str;
    cout << "Input the Stirng: "; 
    getline(cin, str);
    cout << "Given String is: "<< str << endl;
    count_letters_digits_special_char(&str[0]);

    return 0;
}

/*
Sample Output:

Input the Stirng: My String_0123
Given String is: My String_0123

Number of Alphabets in the string is: 8
Number of Digits in the string is: 4
Number of Special characters in the stringis: 2

*/